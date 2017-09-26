#include "bits/stdc++.h"
using namespace std;

#define CSP printf("Case %d: ",Case)
#define CS cout << "Case " << Case << ": "
#define PF printf
#define SC scanf
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
    int N, Case = 0;

    while(cin >> N )
    {
        if(N == 0)
        {
            PF("END OF OUTPUT\n");
            break;
        }
        Case++;
        int Sum = 0;
        for(int i = 1; i <= N / 2; i++)
        {
            if(N % i == 0)
            {
                Sum += i;
            }
        }

        if(Case == 1)
        {
            PF("PERFECTION OUTPUT\n");
        }

        if(Sum == N)
        {
            PF("%5d  PERFECT\n",N);
        }
        else if(Sum > N)
        {
            PF("%5d  ABUNDANT\n",N);
        }
        else
        {
            PF("%5d  DEFICIENT\n",N);
        }
    }

    RT;
}
