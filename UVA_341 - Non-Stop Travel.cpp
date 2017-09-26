#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;
#define INF 1000000000
#define sz 15
LL dist[sz][sz], path[sz][sz];
LL N, E;

void init()
{
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            path[i][j] = 0;
            dist[i][j]= INT_MAX;
            if(i == j)
                dist[i][j] = 0;
        }
    }
}

void floyed_warshal()
{
    for(int k = 1; k <= N; k++)
    {
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j] = path[k][j];
                }
            }
        }
    }
    return;
}

void print_path(LL start, LL ends)
{
    if(path[start][ends] == start)
    {
        printf("%d",path[start][ends]);
        return;
    }
    else
    {
        print_path(start,path[start][ends]);
        printf(" %d",path[start][ends]);
    }
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    LL Case = 1;
    while(scanf("%lld",&N) && N)
    {
        init();
        for(int i = 1; i <= N; i++)
        {
            LL len, V, W;
            scanf("%lld",&len);
            for(int j = 1; j <= len; j++)
            {
                scanf("%lld %lld",&V,&W);
                dist[i][V] = W;
            }
        }

        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                if(dist[i][j] != INT_MAX && i != j)
                    path[i][j] = i;
            }
        }

        floyed_warshal();
        LL start, ends;
        scanf("%lld %lld",&start,&ends);
        printf("Case %lld: Path = ",Case++); print_path(start,ends);

        printf(" %lld; ",ends);
        printf("%lld second delay\n",dist[start][ends]);
    }
}
