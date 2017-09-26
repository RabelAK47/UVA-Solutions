#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL A, B;
    while(scanf("%lld %lld", &A, &B) == 2 and !(A == 0 and B == 0))
    {
        A /= 5, B /= 5;
        printf("%lld\n", abs(A-B)+1);
    }
    return 0;
}
