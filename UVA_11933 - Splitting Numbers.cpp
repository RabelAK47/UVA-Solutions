#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

int main()
{
    LL N;
    while(scanf("%lld", &N) and N != 0)
    {
        bool flag = true;
        LL A = 0, B = 0, temp = 1;

        while(N)
        {
            if(N % 2 == 1)
            {
                flag == true ? A += temp : B += temp;
                flag = !flag;
            }

            N /= 2;
            temp *= 2;
        }
        printf("%lld %lld\n", A, B);
    }
    return 0;
}
