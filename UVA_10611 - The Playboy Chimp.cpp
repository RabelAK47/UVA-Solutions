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
#define V_C vector <long long int>
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

main
{
    LL Case = 0, T, Count, N, Sum;
    while(cin >> N)
    {
        V_C V;
        for(int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            V.pb(temp);
        }
        //sort(V.begin(),V.end());
        LL Q;
        cin >> Q;
        vector<LL>::iterator up, lo;
        for(int i = 0; i < Q; i++)
        {
            LL temp2;
            cin >> temp2;
            up = upper_bound (V.begin(), V.end(), temp2);
            lo = lower_bound(V.begin(), V.end(), temp2);
            int U = (up- V.begin());
            int L = (lo - V.begin());
            if(V[L] >= temp2)
            {
                while(V[L] >= temp2)
                {
                    L--;
                    if(L < 0)
                    {
                        break;
                    }
                }
            }

            if(V[U] <= temp2)
            {
                while(V[U] <= temp2)
                {
                    U++;
                    if(U <= N)
                    {
                        break;
                    }
                }
            }
            if(L < 0) cout << "X ";
            else cout << V[L] << " ";
            if(U >= N) cout << "X";
            else cout << V[U];
            cout << endl;
        }
        //cout << endl;
    }
    RT;
}
