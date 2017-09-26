#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, A[1050];
    cin >> T;
    cin.ignore();
    while(T--)
    {
        string str;
        getline(cin,str);
        stringstream ss(str);
        int N = 0;
        while( ss >> A[N])
        {
            N++;
        }

        int ans = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = i+1; j < N; j++)
            {
                ans = max(ans,__gcd(A[i],A[j]));
            }
        }
        cout << ans << endl;
    }
    return 0;
}

