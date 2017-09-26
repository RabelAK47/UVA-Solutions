#include "bits/stdc++.h"
using namespace std;
#define LL long long int
#define MAXI 30005

LL parent[MAXI], ran[MAXI];

void Initial(LL N)
{
    for(int i = 1; i <= N; i++)
    {
        parent[i] = i, ran[i] = false;
    }
}
LL Findparent(LL N)
{
    if(parent[N] == N)
        return N;
    return parent[N] = Findparent(parent[N]);
}

void Unionset(LL A, LL B)
{
    if(ran[A] > ran[B])
        parent[B] = A; // Setting parent of root(B) as root(A).
    else
    {
        parent[A] = B; // Setting parent of root(A) as root(B).
        if(ran[A] == ran[B])
            ran[A]++;
    }
}
int main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N, M;
        scanf("%lld %lld", &N, &M);
        Initial(N);
        for(int i = 0; i < M; i++)
        {
            LL A, B;
            scanf("%lld %lld", &A, &B);

            LL PA = Findparent(A);
            LL PB = Findparent(B);

            if(PA != PB)
                Unionset(PA,PB);
        }
        map <LL, LL> Mp; map <LL, LL> :: iterator it;
        priority_queue <LL> PQ;
        for(int i = 1; i <= N; i++)
        {
            LL temp = Findparent(i);
            Mp[temp]++;
            PQ.push(Mp[temp]);
        }
        printf("%lld\n",PQ.top());
    }
    return 0;
}
