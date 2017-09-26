#include "bits/stdc++.h"
using namespace std;

#define LL long long int
main()
{
    LL value[30] = {1, 1, 1, 3, 8, 21, 43, 69, 102, 145, 197, 261, 336,
                    425, 527, 645, 778, 929, 1097, 1285,1492, 1721, 1971,
                    2245, 2542, 2865, 3213, 3589 };
    LL N, Case = 1;
    while(scanf("%lld", &N) == 1 and N)
    {
        N--;
        printf("Case #%lld: %lld\n",Case++, value[N]);
    }
    return 0;
}
