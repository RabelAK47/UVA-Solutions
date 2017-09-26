#include "bits/stdc++.h"
using namespace std;

#define LL long long int
#define M 10005
vector <LL> prime;
map <LL, LL> Mp;
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
            prime.push_back(i);
    }

    return;
}

main()
{
    siv();
    for(int i = 0; i < prime.size(); i++)
    {
        LL temp = 0;
        for(int j = i; j < prime.size(); j++)
        {
            temp += prime[j];
            if(temp > 10000)
                break;
            Mp[temp]++;
        }
    }

    LL N;
    while(scanf("%lld", &N) == 1 and N)
        printf("%lld\n",Mp[N]);
    return 0;
}

