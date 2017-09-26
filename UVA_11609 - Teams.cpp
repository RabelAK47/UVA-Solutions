#include "bits/stdc++.h"
using namespace std;

#define LL  long long int
LL Mod = 1000000007;

LL BigMod(LL Base, LL Power)
{
    if(Power == 0)
        return 1;
    if(Power %2 == 0)
    {
        int ret = BigMod(Base, Power/2);
        return ((ret % Mod)*(ret % Mod))%Mod;
    }
    else return ((Base%Mod)*(BigMod(Base,Power-1)%Mod))%Mod;
}

main()
{
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N;
        scanf("%lld", &N);
        //Ans = 2^(N-1) * N;
        LL Ans = (BigMod(2, N-1)*N)%Mod;
        printf("Case #%lld: %lld\n", Case++, Ans);
    }
    return 0;
}

/*
3
1
2
3

Case #1: 1
Case #2: 4
Case #3: 12
*/
