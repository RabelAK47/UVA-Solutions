#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int Function(int N)
{
    return (N * (N + 1) / 2) - N;
}

int main()
{
    vector <LL> V;
    V.push_back(INT_MIN);
    for(int i = 1; i <= 32767; i++)
        V.push_back(Function(i/2) + Function(i-i/2));

    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N;
        scanf("%lld", &N);
        printf("%lld\n", V[N]);
    }
    return 0;
}
