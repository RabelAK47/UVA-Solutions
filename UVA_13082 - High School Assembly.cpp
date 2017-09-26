#include "bits/stdc++.h"
using namespace std;
#define LL long long int

main()
{
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N, j = 0;
        scanf("%lld", &N);
        for(int i = 0; i < N; i++)
        {
            LL temp;
            scanf("%lld", &temp);
            temp == j+1 ? j += 1 : j += 0;
        }
        printf("Case %lld: %lld\n", Case++, N-j);
    }
    return 0;
}
