#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

int main()
{
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N;
        scanf("%lld", &N);
        LL Sum = (N*(N+1)/2);
        Sum % 3 == 0 ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
