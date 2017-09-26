#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    double A, B, C, ans ;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> N;
        for(int j = 1; j <= N; j++)
        {
            cin >> A >> B >> C;
            ans = (A+B)/2 - C;
            printf("%.2lf\n",ans);
        }
    }
    return 0;
}
