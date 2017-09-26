#include "bits/stdc++.h"
using namespace std;
#define LL long long int

vector <LL> divisor[1000002], V;
LL Count;

void DIV()
{
    for(LL i = 1; i <= 100005; i++)
    {
        for(LL j = i; j <= 100005; j += i)
        {
            divisor[j].push_back(i);
        }
    }
    return ;
}

LL SumOf_Div(LL i)
{
    LL Sum = 0;
    for(int j = 0; j < divisor[i].size(); j++)
    {
        Sum += divisor[i][j];
        V.push_back(divisor[i][j]);
    }
    Count = V.size();
    return Sum;
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    DIV();
    LL T;
    scanf("%lld",&T);
    while(T--)
    {
        LL a, b, k, temp, G = 0, H = 0;
        scanf("%lld %lld %lld",&a, &b, &k);

        temp = (a + k - 1)/k*k;
        for(int i = temp; i <= b; i+= k)
        {
            G += SumOf_Div(i);
            H += Count;
            V.clear();
        }
        printf("%lld %lld\n", H, G);
    }
    return 0;
}
