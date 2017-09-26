#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

vector <LL> Adj[10000];
vector <bool> visited;

void BFS(LL S, LL N)
{
    visited.assign(N,false);

    queue <LL> Q;
    Q.push(S);
    visited[S] = true;
    bool flag = true;

    while(Q.empty() == false)
    {
        LL u = Q.front();
        Q.pop();
        for(int i = 0; i < Adj[u].size(); i++)
        {
            LL temp = Adj[u][i];

            if(visited[temp] == false)
            {
                if(visited[u] == false)
                    visited[temp] = true;
                else
                    visited[temp] = false;
                Q.push(temp);
            }
            else if(visited[temp] == true)
            {
                if(visited[temp] == visited[u])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == false)
            break;
    }
    flag == true ? cout << "BICOLORABLE." << endl : cout << "NOT BICOLORABLE." << endl;

    for(int i = 0; i < N; i++)
        Adj[i].clear();
}
int main()
{
    LL N;
    while(scanf("%lld", &N) == 1 and N)
    {
        LL Len;
        scanf("%lld", &Len);
        for(int i = 0; i < Len; i++)
        {
            LL A, B;
            scanf("%lld %lld", &A, &B);
            Adj[A].push_back(B);
            Adj[B].push_back(A);
        }
        BFS(0,N);
    }
    return 0;
}
