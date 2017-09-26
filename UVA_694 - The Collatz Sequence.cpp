#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    LL A, B, Case = 1;
    while(scanf("%lld %lld", &A, &B) == 2 and !(A == -1 and B == -1))
    {
        LL Count = 0, temp = A;
        while(true)
        {
            Count++;
            if(A == 1)
                break;
            A%2 == 0 ? A /= 2 : A = 3 * A + 1;
            if(A > B)
                break;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", Case++, temp, B, Count);
    }
    return 0;
}
