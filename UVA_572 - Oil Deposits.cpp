#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

vector <string> Vec;
bool visited[100][100];

int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,0,-1,1,0,-1,1,-1};
LL N, M;

void DFS(LL x, LL y)
{
    visited[x][y] = true;
    for(int i = 0; i < 8; i++)
    {
        LL t1 = x + dx[i], t2 = y + dy[i];
        if(visited[t1][t2] == false and (t1 >= 0 and t1 < N) and (t2 >= 0 and t2 < M))
        {
            visited[t1][t2] = true;
            if(Vec[t1][t2] == '@')
                DFS(t1, t2);
        }
    }
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    while(scanf("%lld %lld", &N, &M) == 2 and N)
    {
        Vec.clear();
        for(int i = 0; i < N; i++)
        {
            string str;
            cin >> str;
            Vec.push_back(str);
        }
        LL Count = 0;
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                if(visited[i][j] == false and Vec[i][j] == '@')
                {
                    Count++;
                    DFS(i, j);
                }
            }
        }
        printf("%lld\n", Count);
    }
    return 0;
}
