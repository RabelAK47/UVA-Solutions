#include "bits/stdc++.h"
using namespace std;
#define LL          long long int

LL Count_0(LL N)
{
    LL temp = N, Count = 0, left = 1, right = 1;

    while (temp >= 10)
    {
        LL mid = temp%10;
        temp /= 10;
        if (mid)
            Count += (temp * left);
        else
            Count += ((temp-1)*left + N%right +1);
        left *= 10;
        right *= 10;
    }
    return Count;
}

main()
{
    LL M, N;
    while(scanf("%lld %lld", &M, &N) == 2 && !(M < 0 && N < 0))
    {
        LL ans = Count_0(N) - Count_0(M-1);
        if(M == 0)
            ans++;
        printf("%lld\n", ans);
    }
    return 0;
}

