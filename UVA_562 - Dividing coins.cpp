#include "bits/stdc++.h"
using namespace std;

int Coin[105], N, Sum = 0;
int dp[501*100][101];

int rec(int x, int Count)
{
    if(Count == N) return abs(2*x-Sum);

    int &ret = dp[x][Count];
    if(ret != -1) return ret;

    ret = INT_MAX;
    ret = min(ret, rec(x+Coin[Count], Count+1));
    ret = min(ret, rec(x, Count+1));

    return ret;
}
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        Sum = 0;
        memset(dp, -1, sizeof(dp));
        scanf("%d",&N);
        for(int i = 0; i < N; i++)
        {
            scanf("%d",&Coin[i]);
            Sum += Coin[i];
        }
        cout << rec(0,0) << endl;
    }
    return 0;
}
