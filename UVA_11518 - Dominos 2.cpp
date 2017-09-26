#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

vector <LL> Graph[10005];
bool visited[10005];
LL N, M, L, Count;

void DFS(LL x)
{
    visited[x] = true;
    Count++;
    for(int i = 0; i < Graph[x].size(); i++)
    {
        if(visited[Graph[x][i]] == false)
            DFS(Graph[x][i]);
    }
    return;
}


void MEM(void)
{
    for(int i = 0; i < N; i++)
        Graph[i].clear();
    memset(visited, false, sizeof(visited));
    return;
}

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
	{
	    MEM();
	    Count = 0;

	    scanf("%lld %lld %lld", &N, &M, &L);
        while(M-- > 0)
        {
            LL A, B;
            scanf("%lld %lld", &A, &B);
            Graph[A].push_back(B);
        }

        for(int i = 0; i < L; i++)
        {
            LL C;
            scanf("%lld", &C);
            if(visited[C] == false)
                DFS(C);
        }
        printf("%lld\n", Count);
        MEM();
        Count = 0;
	}
    return 0;
}
