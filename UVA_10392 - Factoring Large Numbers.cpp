#include "bits/stdc++.h"
using namespace std;
#define LL long long int

#define M 1000000
LL prime[80000];
LL t = 0;
bool flag[M];
void siv()
{
    // int i, j, val;
    for(LL i = 2; i <= M; i++)
        flag[i] = 1;

    for(LL i = 2; i <= sqrt(M); i++)
    {
        if(flag[i])
        {
            for(LL j = i; j * i <= M; j++)
            {
                flag[i*j] = 0;
            }
        }
    }
    for(LL i = 0; i <= M; i++)
    {
        if(flag[i])
        {
            prime[t++] = i;
        }
    }
    return;
}
int main()
{
    siv();
    LL N;
    while(scanf("%lld", &N) == 1 && N > 0)
    {
        vector <LL> V;
        for(int i = 0; i < t; i++)
        {
            while(N%prime[i] == 0)
            {
                V.push_back(prime[i]);
                N /= prime[i];
            }
            if(N == 1)
                break;
        }
        if(N != 1)
            V.push_back(N);
        for(int i = 0; i < V.size(); i++)
            printf("    %lld\n",V[i]);
        printf("\n");
    }
    return 0;
}
