#include "bits/stdc++.h"
using namespace std;
//typedef long long int LL;
typedef unsigned long long LL;
const LL MAX = 10000+10;
LL Fib[MAX];

LL cycle(LL N)
{
    Fib[0] = 0;
    Fib[1] = 1%N;
    Fib[2] = (Fib[0] + Fib[1]) % N;

    for(int i = 3; i < MAX; i++)
    {
        Fib[i] = (Fib[i-1] + Fib[i-2]) % N;
        if(Fib[i-1] == Fib[0] && Fib[i] == Fib[1]) return i-1;
    }
    return 1;
}


LL Pow_Mod(LL A, LL B, LL M)
{
    if(B == 0)
        return 1;
    LL x = Pow_Mod(A, B/2, M);
    LL ans =  x*x%M;
    if(B%2 == 1)
        ans = ans*A%M;
    return ans;
}
main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%llu", &T);
    while(T-- > 0)
    {
        LL A, B, N;
        scanf("%llu %llu %llu", &A, &B, &N);

        LL temp = cycle(N);
        LL AB = Pow_Mod(A%temp, B, temp);

        printf("%llu\n", Fib[AB]);
    }
    return 0;
}
