#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

LL Totient(LL Num)
{
    if (Num == 1)
        return 1;

    LL res = Num;

    if(Num % 2 == 0)
    {
        res -= (res/2);
        do Num /= 2;
        while(Num % 2 == 0);
    }

    for (LL i = 3; i*i <= Num; i += 2)
    {
        if (Num%i == 0)
        {
            res -= res/i;
            do Num /= i;
            while (Num%i == 0);
        }
    }

    if (Num > 1)
        res -= (res/Num);
    return res;
}

main()
{
    //freopen("WA.txt", "w", stdout);
    LL N;
    while(scanf("%lld", &N) and N)
        printf("%lld\n", Totient(N));

    return 0;
}
