//*
//  __________                        ___        \\ ___          __ __ _ _ .   \_
//   \ ______     \               ___|  _/      ||           \\    ||__ _ _ /      ||
//    |                _/          /    __   |         ||         //.     ||_ _ _ .         ||
//    |          |       \        /   /_/    |         ||           \\.    ||__ _ _ _     ||_ _ _ _
//    |_____|_      /    // _____   |         ||  ___  //     ||___ _  /     ||_______\
//                    \ /     \ /            \ /         \ /               \ /                                  \ /
//*/


#include <bits/stdc++.h>
using namespace std;

long long  dp[102][102];
long long  nCr(int n,int r)
{
    if(r == 1) return n;

    if(n == r) return 1;

    if(dp[n][r] != -1) return dp[n][r];

    else
    {
        dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    int N, R;
    while(cin >> N >> R and !(N == 0 && R == 0))
    {
        for(int i = 0; i < 101; i++)
            for(int j = 0; j < 101; j++)
                dp[i][j] = -1;

        cout << N <<" things taken "<< R << " at a time is " << nCr(N,R) << " exactly." << endl;
    }
    return 0;
}

