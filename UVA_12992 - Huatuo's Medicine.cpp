#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N;
        scanf("%lld", &N);
        printf("Case #%lld: %lld\n", Case++, (N*2)-1);
    }
    return 0;
}
