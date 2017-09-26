#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL Case = 1;
    double A, B;
    while(scanf("%lf %lf", &A, &B) == 2)
    {
        printf("Case %lld: ", Case++);

        if(A == B)
            printf("Same\n");
        else
            printf("%s\n", A > B ? "Bigger": "Smaller");
    }
    return 0;
}
