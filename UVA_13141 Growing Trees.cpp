#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;
LL F[100];

void Fibo()
{
    F[0] = 0, F[1] = 1;
    for(int i = 2; i <= 85; i++)
        F[i] = F[i-1] + F[i-2];
}
int main()
{
    Fibo();
    LL N;
    while(scanf("%lld", &N)== 1 and N)
        printf("%lld\n", F[N]);
    return 0;
}
