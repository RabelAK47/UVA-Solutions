#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

#define Max 500000
LL Parent[Max];
vector <int> Result;
bool Visited[Max];

LL DFS(int S)
{
    if(Visited[S] == true)
        return 0;
    Visited[S] = true;
    LL temp = DFS(Parent[S]);
    Visited[S] = false;
    return Result[S] = temp + 1;
}

main()
{
   // freopen("WA.txt", "w", stdout);
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        Result = vector<int> (Max, -1);
        LL Q;
        scanf("%lld", &Q);
        for(int i = 0; i < Q; i++)
        {
            LL u, v;
            scanf("%lld %lld", &u, &v);
            Parent[--u] = --v;
        }

        LL R = -1, Id;
        for(int i = 0; i < Q; i++)
        {
            if(Result[i] == -1)
            {
                DFS(i);
                if(Result[i] > R)
                {
                    R = Result[i];
                    Id = i+1;
                }
            }
        }
        printf("Case %lld: %lld\n",Case++, Id);
    }
    return 0;
}
