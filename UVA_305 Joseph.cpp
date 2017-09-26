#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    LL V[15] = {2, 7, 5, 30, 169, 441, 1872, 7632, 1740,93313, 459901, 1358657, 2504881, 13482720};
    LL N;
    while(scanf("%lld", &N)== 1 and N)
        printf("%lld\n", V[N-1]);
    return 0;
}
