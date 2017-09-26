#include "bits/stdc++.h"
using namespace std;

#define MOD  1000000
#define LL long long int
LL dp[102][102];

LL rec(LL N, LL K)
{
    LL ans = 0, i = 0, &ret = dp[N][K];
    if(N < 0 || K < 0) return 0;
    if(ret != -1) return ret;

    while(i <= N)
        ans += (rec(N-i, K-1)%MOD), i++;

    ret = ans%MOD;
    return ret;
}

int main()
{
    //memset(dp, -1, sizeof(dp));
    LL N, K;
    while(scanf("%lld %lld", &N, &K)==2 && (N == 0 && K == 0) == false)
    {
        memset(dp, -1, sizeof(dp));
        dp[0][0] = 1;
        printf("%lld\n", rec(N,K));
    }
    return 0;
}

