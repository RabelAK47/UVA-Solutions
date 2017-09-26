#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    LL N;
    while(scanf("%lld", &N) == 1)
    {
        printf("%lld\n", N-1 + (LL)log2(N-1));
    }
    return 0;
}
