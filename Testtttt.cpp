#include "bits/stdc++.h"
using namespace std;
#define LL long long

main()
{
    LL N;
    while(cin >> N)
    {
        LL temp = N, ans = 1;
        while(N/10)
            N /= 10, ans *= 10;

        ans *= (N%10+1);
        cout << ans-temp << endl;
    }
    return 0;
}


