#include <bits/stdc++.h>
using namespace std;
int G[200][20];
vector <int>  path;

void rec(int cur)
{
    if(path.size()>9)
        return;
    if(path.size()==9)
    {
        for(int i = 0; i<path.size(); i++)
        {
            cout << path[i];
        }
        cout << endl;
        getchar();
    }
    for(int i = 1; i<=5; i++)
    {
        if(G[cur][i] == 1)
        {
            G[cur][i]= 0;
            G[i][cur]= 0;
            path.push_back(i);
            rec(i);
            path.pop_back();
            G[cur][i]=1;
            G[i][cur]=1;
        }
    }
}
int main()
{
    memset(G,0,sizeof(G));
    G[1][2] = 1, G[1][3] = 1, G[1][5] = 1;
    G[2][1] = 1, G[2][3] = 1, G[2][5] = 1;
    G[3][1] = 1, G[3][2] = 1, G[3][4] = 1,G[3][5] =1;
    G[4][3] = 1, G[4][5] = 1;
    G[5][1] = 1, G[5][2] = 1, G[5][3] = 1, G[5][4] = 1;
    path.push_back(1);
    rec(1);
    return 0;
}
