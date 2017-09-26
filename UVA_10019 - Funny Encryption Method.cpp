#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

LL B1(LL N)
{
    LL ret = 0;
    while(N)
    {
        if(N&1)
            ret++;
         N >>= 1;
    }
    return ret;
}

LL B2(LL N)
{
    LL Sum = 0;
    while(N)
    {
        Sum = Sum * 16 + N%10;
        N /= 10;
    }
    Sum = B1(Sum);
    return Sum;
}

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N;
        scanf("%lld", &N);
        printf("%lld %lld\n", B1(N), B2(N));
    }
}
