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

#define SQ(K,N) K * sqrt(N)
#define Sq(N) sqrt(N)
#define main int main()
#define RT return 0

main
{
    LL N, Case = 0, M;
    string str;

    while(cin >> str)
    {
        Case++;
        cin >> N;
        cout << "Case " << Case << ":" << endl;

        for(int i = 0; i < N; i++)
        {
            LL A, B, Count = 0;
            cin >> A >> B;
            if(A > B) swap(A,B);

            string sub = str.substr(A,B-A+1);

            for(int i = 0; i < sub.length(); i++)
            {
                if(sub[i] == sub[i+1])
                    continue;
                else Count++;
            }

            Count == 1 ? Yes : No;
        }
    }

    RT;
}
