#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

vector <LL> Graph[21];
bool visited[50];
LL level[50];

void BFS(LL S, LL D)
{
    memset(visited, false, sizeof visited);
    memset(level, false, sizeof level);

    queue <LL> Q;
    visited[S] = true;
    level[S] = 0;
    Q.push(S);

    while(!Q.empty())
    {
        LL fr = Q.front();
        for(int i = 0; i < Graph[fr].size(); i++)
        {
            int v = Graph[fr][i];
            if(visited[v] == false)
            {
                visited[v] = true;
                level[v] = level[fr] + 1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    printf("%2lld to %2lld: %lld\n", S, D, level[D]);
    return;
}
main()
{
    //freopen("WA.txt", "w", stdout);
    LL N, Case = 1;
    while(scanf("%lld", &N) == 1)
    {
        while(N-- > 0)
        {
            LL y;
            scanf("%lld",&y);
            Graph[1].push_back(y);
            Graph[y].push_back(1);
        }

        for(int i = 2; i <= 19; i++)
        {
            scanf("%lld", &N);
            for(int j = 0; j < N; j++)
            {
                LL y;
                scanf("%lld",&y);
                Graph[i].push_back(y);
                Graph[y].push_back(i);
            }
        }

        LL test;
        scanf("%lld", &test);
        printf("Test Set #%lld\n", Case++);
        for(int i = 0; i < test; i++)
        {
            LL source, dest;
            scanf("%lld %lld", &source, &dest);
            BFS(source, dest);
        }
        printf("\n");
        for(int i = 0; i < 21; i++)
            Graph[i].clear();
    }
    return 0;
}
