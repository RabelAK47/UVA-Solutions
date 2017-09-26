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

#define M 1000007
int prime[M];
int t = 0;
bool flag[M];
void siv()
{
    int i , j, val;
    for(int i = 2; i <= M; i++)
    {
        flag[i] = 1;
    }
    for(int i = 2; i <= sqrt(M); i++)
    {
        if(flag[i])
        {
            for(j = i; j * i <= M; j++)
            {
                flag[i*j] = 0;
            }
        }
    }
    for(int i = 0; i <= M; i++)
    {
        if(flag[i])
        {
            prime[t++] = i;
        }
    }
}
main
{
   // Out;
    siv();
    LL N;
    while(cin >> N)
    {
        LL temp = N, rev = 0;
        while(temp)
        {
            rev *= 10;
            rev += temp % 10;
            temp /= 10;
        }
        cout << N;
        if(N != rev && flag[N] && flag[rev])
            cout << " is emirp.";
        else if(flag[N])
            cout << " is prime.";
        else
            cout << " is not prime.";

        cout << endl;
     //   cout << rev << endl;
    }
}
