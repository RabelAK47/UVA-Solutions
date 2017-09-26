#include "bits/stdc++.h"
using namespace std;
#define LL long long int

main()
{
    LL N, Case = 1;
    while(scanf("%lld", &N) == 1)
    {
        bool flag = true;
        vector <LL> V(N);
        for(int i = 0; i < N; i++)
        {
            scanf("%lld", &V[i]);
            if(V[i] == 0)
                flag = false;
            if(i > 0)
            {
                if(V[i-1] >= V[i])
                flag = false;
            }
        }
        printf("Case #%lld: ", Case++);
        if(flag == false)
        {
            printf("It is not a B2-Sequence.\n\n");
            continue;
        }
        map <LL, bool> Mp;
        for(int i = 0; i < N; i++)
        {
            for(int j = i; j < N; j++)
            {
                LL temp = V[i] + V[j];
                if(Mp[temp] == false)
                    Mp[temp] = true;
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag == false)
                break;
        }
        if(flag)
            printf("It is a B2-Sequence.\n\n");
        else
            printf("It is not a B2-Sequence.\n\n");
    }
    return 0;
}
