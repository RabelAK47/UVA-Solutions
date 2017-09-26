#include "bits/stdc++.h"
using namespace std;

#define CSP printf("Case %d: ",Case)
#define CS cout << "Case " << Case << ": "
#define LL long long int
#define LI long int
#define LN str.length()
#define LN1 str1.length()
#define LN2 str2.length()
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define CO(Res) cout << Res << endl

#define pb push_back
#define V_C vector <long int>
#define C_ Case++

#define AS(A,N) sort(A, A+N)
#define VS(V) sort(V.begin(), V.end())
#define BNS(V,N) binary_search(V.begin(),V.end(), N)

#define VD(V) for(int i = 0; i < V.size();i++) cout << V[i] << " "
#define AD(A,N) for(int i = 0; i < N; i++) cout << A[i] << " "

#define SQ(K,N) K * sqrt(N)
#define Sq(N) sqrt(N)
#define main int main()
#define RT return 0

main
{
    LL N, Case = 0, T, Count;
    cin >> T;
    while(T--)
    {
        C_;
        cin >> N;
        V_C V;
        LL Multi = 1, Sum  = 0;

        for(int i = 0; i < N; i++)
        {
            LL temp;
            cin >> temp;
            V.pb(temp);
            Multi *= temp;
        }

        LL Total = N * Multi;

        for(int i  = 0; i < N; i++)
        {
            Sum += Multi / V[i];
        }
        CS;
        cout << Total / __gcd(Total,Sum) << "/" << Sum / __gcd(Total,Sum) << endl;
    }

    RT;
}
