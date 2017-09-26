#include "bits/stdc++.h"
using namespace std;
#define Maxi 5*100005

vector <int> divisor[Maxi];

void Divisors()
{
    for(int i = 1; i <= Maxi; i++)
    {
        for(int j = i; j <= Maxi; j+= i)
        {
            divisor[j].push_back(i);
        }
    }
}

void SumOf_Div(int N, int K)
{
    int Sum = 0;
    for(int j = 0; j < divisor[N].size(); j++)
    {
        if(divisor[N][j]% K != 0)
        {
            Sum += divisor[N][j];
        }
    }
    printf("%d\n", Sum);
}

int main()
{
    Divisors();
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N, K;
        scanf("%d %d", &N, &K);
        SumOf_Div(N,K);
    }
    return 0;
}
