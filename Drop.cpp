#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    LL N, Count = 0, Sum = 0;
    scanf("%lld", &N);
    vector <LL> V(7);
    for(int i = 0; i < 7; i++)
        scanf("%lld", &V[i]);
    for(int i = 0; Sum < N; i++, Count++)
        Sum += V[i];
    printf("%lld\n", Count%7);
    return 0;
}

