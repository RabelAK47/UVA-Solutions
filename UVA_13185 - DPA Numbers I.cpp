#include "bits/stdc++.h"
using namespace std;


#define LL          long long int
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}
#define Scan(A)         scanf("%lld", &A)
#define Scan2(A, B) 	scanf("%lld %lld",&A, &B)
#define Scan3(A, B, C) 	scanf("%lld %lld %lld",&A, &B, &C)
#define Scan4(A, B, C, D) 	scanf("%lld %lld %lld %lld",&A, &B, &C, &D)

#define Maxi 5*100005
vector <LL> divisor[Maxi];

bool isvowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

struct myStruct
{
    int Age;
    string Name;
    double D;
};

void Divisors()
{
    for(LL i = 1; i <= 1005; i++)
    {
        for(LL j = i; j <= 1005; j += i)
        {
            divisor[j].push_back(i);
        }
    }
}

void SumOf_Div(LL N)
{
    LL Sum = 0;
    for(int i = 0; i < divisor[N].size(); i++)
    {
        LL temp = divisor[N][i];
        if(temp != N)
            Sum += divisor[N][i];
    }

    if(Sum == N)
    {
        printf("perfect\n");
        return;
    }
    Sum < N ? printf("deficient\n") : printf("abundant\n");
    return;
}

main()
{
    Faster;
    Divisors();
    LL T;
    Scan(T);
    while(T-- > 0)
    {
        LL N;
        Scan(N);
        SumOf_Div(N);
    }
    return 0;
}

