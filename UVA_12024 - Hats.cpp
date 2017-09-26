#include "bits/stdc++.h"
using namespace std;

#define LL          long long int
#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}

LL T, N, dp[15], F[15];

void Solve()
{
    dp[2] = 1;
    dp[3] = 2;
    for(int i = 4; i <= 12; i++)
        dp[i] = (i-1)* (dp[i-1]+dp[i-2]);
}

void Factorial()
{
    F[0] = 1;
    for(int i = 1; i <= 12; i++)
        F[i] = i*F[i-1];
}

void input(LL &T)
{
    cin >> T;
    return;
}

main()
{
    //write();
    Faster;
    Solve();
    Factorial();
    input(T);
    while(T-- > 0)
    {
        input(N);
        cout << dp[N] << "/" << F[N] << endl;
    }
    return 0;
}
