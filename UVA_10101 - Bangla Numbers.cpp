#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

void Bangla(LL N)
{
    if (N >= 10000000)
    {
        Bangla(N/10000000);
        printf (" kuti");
        N %= 10000000;
    }
    if(N >= 100000)
    {
        Bangla(N/100000);
        printf(" lakh");
        N %= 100000;
    }
    if (N >= 1000)
    {
        Bangla(N/1000);
        printf (" hajar");
        N %= 1000;
    }
    if (N >= 100)
    {
        Bangla(N / 100);
        printf (" shata");
        N %= 100;
    }
    if (N)
        printf (" %d",N);
}

main()
{
    LL N, Case = 1;
    while(scanf("%lld", &N) == 1)
    {
        printf ("%4d.",Case++);
        if(N == 0)
            printf(" 0");
        Bangla(N);
        printf("\n");
    }
    return 0;
}
