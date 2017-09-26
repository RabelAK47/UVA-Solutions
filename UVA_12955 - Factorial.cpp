#include "bits/stdc++.h"
using namespace std;

#define LL long long int
main()
{
    LL F [15] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    LL N, Count;
    while(scanf("%lld", &N) == 1)
    {
        Count = 0;
        for(int i = 9; i >= 0; i--)
        {
            if(N >= F[i])
            {
                while(N >= F[i])
                {
                    N -= F[i];
                    Count++;
                }
            }
        }
        printf("%lld\n", Count);
    }
    return 0;
}
