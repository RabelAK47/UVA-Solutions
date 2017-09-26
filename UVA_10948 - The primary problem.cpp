#include "bits/stdc++.h"
using namespace std;

#define LL long long int
#define M 1000000
LL prime[M], t = 0;

bool flag[M];

void siv()
{
    int i, j, val;
    for(int i = 2; i <= M; i++)
        flag[i] = true;

    for(int i = 2; i * i <= M; i++)
    {
        if(flag[i] == true)
        {
            for(j = i; j * i <= M; j++)
                flag[i*j] = false;
        }
    }

    for(int i = 0; i <= M; i++)
    {
        if(flag[i] == true)
            prime[t++] = i;
    }
}

main()
{
    siv();
    LL N;
    while(scanf("%lld", &N) == 1 and N)
    {
        bool check = false;
        printf("%lld:\n", N);

        for(int i = 0; prime[i] <= N / 2 ; i++ )
        {
            if(flag[N-prime[i]] == 1)
            {
                printf("%lld+%lld\n", prime[i], N-prime[i]);
                check = true;
                break;
            }
        }

        if(!check)
            printf("NO WAY!\n");
    }
    return 0;
}
