#include "bits/stdc++.h"
using namespace std;


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int N, Ans = 0;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            long int A, B, C;
            cin >> A >> B >> C;
           Ans += (A*C);
        }
        cout << Ans << endl;
    }
    return 0;
}
