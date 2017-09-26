#include "bits/stdc++.h"
using namespace std;

int visited[1001];

void bfs(int source, map<int, vector<int> > graph)
{
    queue <int> Q;
    Q.push(source);
    visited[source] = 0;

    while(!Q.empty())
    {
        int top = Q.front(); Q.pop();
        int len = graph[top].size();

        for(int i = 0; i < len; i++)
        {
            int temp = graph[top][i];
            if(visited[temp] == false)
            {
                visited[temp] = visited[top]+1;
                Q.push(temp);
            }
        }
    }
    return;
}

int main()
{
    int T, Case = 0;
    scanf("%d", &T);
    while(T-- > 0)
    {
        int N, M;
        map <int, vector <int> > graph;
        scanf("%d %d", &N, &M);
        for(int i = 0; i < N; i++)
            visited[i] = false;

        while(M-- > 0)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        bfs(0, graph);
        for(int i = 1; i < N; i++)
            printf("%d\n", visited[i]);
        if(T)
        printf("\n");
    }
    return 0;
}
