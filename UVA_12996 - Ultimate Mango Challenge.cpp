#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}
main()
{
    Faster;
    LL T, Case = 1;
    scanf("%lld", &T);

    while(T-- > 0)
    {
        LL N, L, Sum = 0, Res = 1;
        scanf("%lld %lld", &N, &L);

        LL A[N+5];
        for(int i = 0; i < N; i++)
        {
            scanf("%lld", &A[i]);
            Sum += A[i];
        }

        for(int i = 0; i < N; i++)
        {
            LL temp;
            scanf("%lld", &temp);
            Res &= A[i] <= temp;
        }

        printf("Case %lld: ", Case++);
        Res &= Sum <= L;
        Res ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}
