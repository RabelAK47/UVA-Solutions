#include "bits/stdc++.h"
using namespace std;
int DP[10000001];

void Solve()
{
    double last = 0;

    for(int i = 1; i <= 10000001; i++)
    {
        last += log10(i);
        DP[i] = (int) last;
    }
}

int main()
{
    Solve();
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        cout << DP[N]  + 1 << endl;
    }
    return 0;
}
