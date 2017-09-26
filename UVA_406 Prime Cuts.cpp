#include "bits/stdc++.h"
using namespace std;

typedef long long int LL;

#define M 1001
int prime[M], t = 0;

void siv()
{
    prime[t++] = 1;

    for(int i = 2; i < M; i++)
    {
        int check = 0;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                check = 1;
                break;
            }
        }
        if(!check)
            prime[t++] = i;
    }
}

int main()
{
    siv();
    LL N, C,j;

    while(scanf("%lld %lld", &N, &C) == 2)
    {
        printf("%lld %lld:", N, C);

        LL Cprime[M], Count = 0;
        for(int i = 0; i < t; i++)
        {
            if(prime[i] <= N)
                Cprime[Count++] = prime[i];
            else
                break;
        }

        Count&1 ? C = C*2-1 : C = C*2;
        if(C > Count)  C = Count;

        for(int i = Count/2-C/2, j = 0; j < C; j++, i++)
            printf(" %lld", Cprime[i]);

        printf("\n\n");
    }
    return 0;
}
