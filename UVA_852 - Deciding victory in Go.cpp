#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

//int dx8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
//int dy8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dx4[4] = {1, 0, -1, 0};
int dy4[4] = {0, 1, 0, -1};

vector <string> V;
bool visited[100][100], IsB, IsW;
LL N, Count1, Count2;

void DFS1(LL x, LL y)
{
    visited[x][y] = true;
    Count1++;
    for(int i = 0; i < 4; i++)
    {
        LL t1 = x + dx4[i], t2 = y + dy4[i];
        if(visited[t1][t2] == false and (t1 >= 0 and t1 < N) and (t2 >= 0 and t2 < N))
        {
            visited[t1][t2] = true;
            if(V[t1][t2] == '.' or V[t1][t2] == 'O')
                DFS1(t1, t2);
        }
    }
    return;
}

void DFS2(LL x, LL y)
{
    visited[x][y] = true;
    Count2++;
    for(int i = 0; i < 4; i++)
    {
        LL t1 = x + dx4[i], t2 = y + dy4[i];
        if(visited[t1][t2] == false and (t1 >= 0 and t1 < N) and (t2 >= 0 and t2 < N))
        {
            visited[t1][t2] = true;
            if(V[t1][t2] == '.' or V[t1][t2] == 'X')
                DFS2(t1, t2);
        }
    }
    return;
}
void MEM(void)
{
    V.clear();
    memset(visited, false, sizeof(visited));
    return;
}

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    cin.ignore();
    while(T-- > 0)
	{
	    MEM();
	    N = 9;
        for(int i = 0; i < N; i++)
        {
            string str;
            cin >> str;
            V.push_back(str);
        }
        vector <string> V2 = V;
        Count1 = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(visited[i][j] == false and V[i][j] == 'O')
                    DFS1(i, j);
            }
        }
        MEM();
        Count2 = 0;
        V = V2;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(visited[i][j] == false and V[i][j] == 'X')
                    DFS2(i, j);
            }
        }
        LL Common = (Count1+Count2)-81;
        LL White = Count1 - Common;
        LL Black = Count2 - Common;
        printf("Black %lld White %lld\n", Black, White);
	}
    return 0;
}
