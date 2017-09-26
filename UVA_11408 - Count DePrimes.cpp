#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

#define Max 5000007
LL dp[Max];
bool isPrime[Max];

void Siv()
{
    memset(isPrime,true,sizeof isPrime);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2 ; i < Max; i++)
    {
        if(isPrime[i])
        {
            dp[i] += i ;
            for(int j = i * 2 ; j < Max; j += i)
            {
                isPrime[j] = false ;
                dp[j] += i ;
            }
        }
    }
}
int main()
{
    //freopen("WA.txt", "w", stdout);
    Siv();
    for(int i = 2; i < Max; i++)
    {
        if(isPrime[dp[i]])
            dp[i] = dp[i-1]+1;
        else
            dp[i] = dp[i-1];
    }
    LL A, B;
    while(scanf("%lld", &A) and A)
    {
        scanf("%lld", &B);
        printf("%lld\n",dp[B]-dp[A-1]);
    }
    return 0;
}
