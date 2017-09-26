#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL N, M;
    while(scanf("%lld %lld", &N, &M) == 2)
        printf("%lld\n", max(N, M));

    return 0;
}
