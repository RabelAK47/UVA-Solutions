#include "bits/stdc++.h"
using namespace std;
#define LL long long int

LL lis[100001], Ara[100001];
bool Visited[100001];

LL LDS(LL N)
{
    for(int i = 0; i < N; i++)
        lis[i] = 1;
    priority_queue <LL> PQ;
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i && Visited[i] == false; j++)
        {
            if ( Ara[i] < Ara[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
                PQ.push(lis[i]);
            }
        }
        Visited[i] = 1;
    }
    return PQ.top();
}


int main()
{
    LL Case = 1;
    while(true)
    {
        scanf("%lld", &Ara[0]);
        if(Ara[0] == -1) break;

        else
        {
            LL N, i = 1;
            memset(Visited,0,sizeof(Visited));

            while(scanf("%lld", &N) == 1 && N != -1)
                Ara[i++] = N;

            if(Case > 1)
                printf("\n");
            printf("Test #%lld:\n  maximum possible interceptions: %lld\n", Case++, LDS(i));
        }
    }
    return 0;
}
