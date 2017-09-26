#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

LL N, M, OK[101], edge[101][101];
vector <LL> V;

void TopoSort()
{
    queue <LL> Q;

    for(int i = 1; i <= N; i++)
        if(OK[i] == false)
            Q.push(i);

    while(!Q.empty())
    {
        LL fr = Q.front();
        V.push_back(fr);
        Q.pop();
        for(int i = 1; i <= N; i++)
        {
            if(edge[fr][i] == true)
            {
                OK[i]--;
                if(OK[i] == false)
                    Q.push(i);
            }
        }
    }
    return;
}

void MEM(void)
{
    memset(OK, false, sizeof(OK));
    memset(edge, false, sizeof(edge));
    V.clear();
    return;
}

main()
{
    //freopen("WA.txt", "w", stdout);
    while(scanf("%lld %lld", &N, &M) == 2 and !(N == 0 and M == 0))
    {
        MEM();

        while(M-- > 0)
        {
            LL x, y;
            scanf("%lld %lld", &x, &y);
            edge[x][y] = true;
            OK[y]++;
        }

        TopoSort();

        for(int i = 0; i < V.size(); i++)
        {
            if(i != 0)
                printf(" ");
            printf("%lld", V[i]);
        }
        printf("\n");
    }
    return 0;
}

