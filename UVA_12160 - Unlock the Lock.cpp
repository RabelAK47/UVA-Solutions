#include "bits/stdc++.h"
using namespace std;
#define LL long long int


LL L, U, R, ara[10010], visited[10010], cost[10010];

void BFS(LL start)
{
    queue <LL> Q;
    Q.push(start);
    while(!Q.empty())
    {
        LL K = Q.front();
        Q.pop();
        for(int i = 0; i < R; i++)
        {
            LL temp = (K+ara[i]) % 10000;
            if(visited[temp] == false)
            {
                visited[temp] = true;
                cost[temp] = cost[K] + 1;
                Q.push(temp);
            }
        }
    }
    return;
}

main()
{
    LL Case = 1;
    while(scanf("%lld %lld %lld", &L, &U, &R) == 3 and !(!L && !U && !R))
    {
        memset(visited, 0, sizeof(visited)); memset(cost, 0, sizeof(cost));
        for(int i = 0; i < R; i++)
        {
            scanf("%lld", &ara[i]);
        }
        BFS(L);
        cost[U] ? printf("Case %lld: %lld\n", Case++, cost[U]) : printf("Case %lld: Permanently Locked\n", Case++);
    }
    return 0;
}
