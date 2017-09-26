#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    LL N;
    while(scanf("%lld", &N) and N)
    {
        LL maxi = 0, temp = 0;
        for(int i = 0; i < N; i++)
        {
            LL A;
            scanf("%lld", &A);
            temp += A;
            if(temp > maxi)
                maxi = temp;
            if(temp < 0)
                temp = 0;
        }
        maxi > 0 ? printf("The maximum winning streak is %lld.\n", maxi) : printf("Losing streak.\n");
    }
    return  0;
}
