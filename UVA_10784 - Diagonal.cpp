#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    //freopen("WA.txt", "w", stdout);
    LL Case = 1, N;
    while(scanf("%lld", &N) == 1 and N)
    {
        N = ceil((3+sqrt(9+(8*N)))/2);
        printf("Case %lld: %lld\n",Case++,N);
    }
    return 0;
}

