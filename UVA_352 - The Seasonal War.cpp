#include "bits/stdc++.h"
using namespace std;

#define LL          long long int
#define mem(a,b)    memset(a,b,sizeof(a))

LL visit[30][30], N;
char str[30][30];

void DFS(int x, int y)
{
    if(x < 0 or x >= N or y < 0 or y >= N or visit[x][y] == true or str[x][y] == '0')
        return;

    visit[x][y] = true;
    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            DFS(x+i, y+j);
        }
    }
    return;
}

main()
{
    LL Case = 1;
    while(scanf("%lld", &N) == 1)
    {
        mem(visit, 0);
        for(int i = 0; i < N; i++)
            cin >> str[i];
        LL Count = 0;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(visit[i][j] == false and str[i][j] == '1')
                {
                    Count++;
                    DFS(i, j);
                }
            }
        }
        printf("Image number %lld contains %lld war eagles.\n", Case++, Count);
    }
    return 0;
}
