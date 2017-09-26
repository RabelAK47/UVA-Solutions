#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    LL T, Case = 0;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        if(Case)
            printf("\n");
        Case = true;
        LL N;
        scanf("%lld", &N);
        vector <LL> V(N);
        for(int i = 0; i < N; i++)
        {
            LL A, B;
            scanf("%lld %lld", &A, &B);
            V[i] = (A+B);
        }
        reverse(V.begin(), V.end());
        for(int i = 0; i < V.size(); i++)
        {
            if(V[i] >= 10)
                V[i+1] += (V[i]/10), V[i] %= 10;
        }
        reverse(V.begin(), V.end());
        for(int i = 0; i < V.size(); i++)
            printf("%lld", V[i]);
        printf("\n");
    }
    return 0;
}

