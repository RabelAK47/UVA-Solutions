#include "bits/stdc++.h"
using namespace std;

#define len 10000

int main()
{
    //freopen("WA.txt", "w", stdout);

    int dp[10005];
    for(int i = 1; i <= len; i++) dp[i] = i;

    for(int i = 1; i <= len; i++)
        if(i*i <= len) dp[i*i] = 1;

    for(int i = 1; i <= len; i++)
    {
        int j = 1;
        while(j <= (int)i/2)
        {
            if(dp[j] == 1)
                dp[i] = min(dp[i],1+dp[i-j]);
            j++;
        }
    }

    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N;
        scanf("%d",&N);
        printf("%d\n", dp[N]);
    }

    return 0;
}
