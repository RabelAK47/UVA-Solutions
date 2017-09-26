#include "bits/stdc++.h"
using namespace std;

#define LL long long int

LL F[1000];

void DP()
{
    F[0] = F[1] = 1;
    for(int i = 2; i <= 80; i++)
        F[i] = F[i-1] + F[i-2];
}
main()
{
    DP();
    LL N;
    while(scanf("%lld", &N) == 1 and N)
        printf("%lld\n", F[N]);
    return 0;
}
