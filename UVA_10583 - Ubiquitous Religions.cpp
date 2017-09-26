#include "bits/stdc++.h"
using namespace std;
#define LL long long int
#define MAXI 50005

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
        parent[B] = A;
    else
    {
        parent[A] = B;
        if(ran[A] == ran[B])
            ran[A]++;
    }
}
int main()
{
    //freopen("WA.txt", "w", stdout);
    LL N, M, Case = 0;
    while(scanf("%lld %lld", &N, &M)==2 && !(M == 0 && N == 0))
    {
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
        set <LL> St;
        for(int i = 1; i <= N; i++)
        {
            LL temp = Findparent(i);
            St.insert(temp);
        }
        LL temp = St.size();
        printf("Case %lld: %lld\n", ++Case, temp);
    }
    return 0;
}
