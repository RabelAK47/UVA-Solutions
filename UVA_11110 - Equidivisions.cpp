#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

int dx4[4] = {1, 0, -1, 0};
int dy4[4] = {0, 1, 0, -1};

LL Vec[100][100], N;
bool visited[100][100];

LL DFS(LL x, LL y)
{
    visited[x][y] = true;
    LL Count = 1;

    for(int i = 0; i < 4; i++)
    {
        LL t1 = x + dx4[i], t2 = y + dy4[i];

        if(visited[t1][t2] == false and (t1 >= 0 and t1 < N) and (t2 >= 0 and t2 < N))
        {
            if(Vec[x][y] == Vec[t1][t2])
                Count += DFS(t1, t2);
        }
    }

    return Count;
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    while(scanf("%lld", &N) == 1 and N)
    {

        string ex;
        getline(cin,ex);

        memset(Vec, N, sizeof Vec);
        memset(visited, false, sizeof(visited));

        for(int i = 1; i < N; i++)
        {
            string str;
            getline(cin,str);

            stringstream is(str);
            LL x, y;
            while(is >> x >> y)
                Vec[x-1][y-1] = i;
        }

		bool flag = true;
		for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(visited[i][j] == false)
                {
                    if(DFS(i,j) != N)
                        flag = false;
                }
            }
            if(flag == false)
                break;
        }

        printf(flag == true ? "good\n" : "wrong\n");

    }
    return 0;
}
