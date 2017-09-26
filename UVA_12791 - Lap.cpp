#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;


main()
{
    //freopen("WA.txt", "w", stdout);
    LL A, B;
    while(scanf("%lld %lld", &A, &B) == 2)
    {
        LL Count = 1, dA = 0, dB = 0;

        for(int i = 0; (dB - dA < A); i++, Count++)
            dA += A, dB += B;

        printf("%lld\n", Count);
    }
    return 0;
}
