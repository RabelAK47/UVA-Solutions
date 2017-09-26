#include "bits/stdc++.h"
using namespace std;
#define LL  long long int

main()
{
    //write();
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N;
        scanf("%lld", &N);
        LL A = N, B = (N+1), C = (N+2);

        if(A%3 == 0)
        {
            A /= 3;
//            cout << "YES1\n";
        }
        else if(B%3 == 0)
        {
            B /= 3;
//            cout << "YES2\n";
        }
        else if(C%3 == 0)
        {
            C /= 3;
//            cout << "YES3\n";
        }

        N = (A*B)%1000000007;
        N = (N*C)%1000000007;

        printf("Case %lld: %lld\n", Case++, N);
    }
    return 0;
}
