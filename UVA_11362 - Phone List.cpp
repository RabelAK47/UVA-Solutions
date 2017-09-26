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

bool Check(string str1, string str2)
{
    for(int i  = 0; i < LN1; i++)
    {
        if(str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

main
{
    LL N, Case = 0, T, Count;
    cin >> T;
    while(T--)
    {
        cin >> N;
        vector <string> str;
        for(int i = 0; i < N; i++)
        {
            string temp; cin >> temp; str.push_back(temp);
        }
        sort(str.begin(),str.end());
        bool flag = true;
        for(int i = 0; i < N - 1; i++)
        {
            if(Check(str[i], str[i+1]) == true)
            {
                flag = false;
                break;
            }
        }
        flag ? YES : NO;
    }

    RT;
}

