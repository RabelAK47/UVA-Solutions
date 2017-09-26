#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL x, y, r;
        scanf("%lld %lld %lld", &x, &y, &r);
        printf("%0.2lf %0.2lf\n", (double) r-sqrt(x*x+y*y), (double) r+sqrt(x*x+y*y) );
    }
    return 0;
}
