#include "bits/stdc++.h"
using namespace std;

template <typename T>
T square(T x)
{
    return x*x;
}
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

#define LCM(A,B) (A / __gcd(A,B) ) * B

#define pb push_back
#define V_C vector <long int>
#define C_ Case++

#define AS(A,N) sort(A, A+N)
#define VS(V) sort(V.begin(), V.end())
#define VRS(V) sort(V.rbegin(), V.rend())
#define BNS(V,N) binary_search(V.begin(),V.end(), N)

#define maxall(V) *max_element(V.begin(),V.end())
#define minall(V) *min_element(V.begin(),V.end())

#define VD(V) for(int i = 0; i < V.size();i++) cout << V[i] << " "
#define AD(A,N) for(int i = 0; i < N; i++) cout << A[i] << " "

#define SQ(K,N) K * sqrt(N)
#define Sq(N) sqrt(N)
#define main int main()
#define RT return 0
#define In freopen("In.txt", "r", stdin)
#define Out freopen("Out.txt", "w", stdout)

main
{
    //Out;
    //freopen("Out.txt", "w", stdout);
    LL A[55];
    A[1] = 2;
    A[2] = 3;

    for(int i = 3; i <= 51; i++)
    {
        A[i] = A[i-1] + A[i-2];
    }

    LL T, Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        LL N;
        cin >> N;
        cout << "Scenario #" << Case << ":" << endl << A[N] << endl << endl;
    }

    RT;
}
