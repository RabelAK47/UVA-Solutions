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

main
{
    int Case = 0, N;
    cin >> N;
    while(N--)
    {
        int Sum = 0; Case++;
        int Term1, Term2, Final, Attendance, Class_Test1, Class_Test2, Class_Test3;
        cin >> Term1 >> Term2 >> Final >> Attendance >> Class_Test1 >> Class_Test2 >> Class_Test3;
        int A[5];
        A[0] = Class_Test1;
        A[1] = Class_Test2;
        A[2] = Class_Test3;
        sort(A,A+3);
        Sum += (Term1 + Term2 + Final + Attendance);
        double Average = (A[1] + A[2]) / 2;
        Sum += Average;
        CS;
        if(Sum >= 90)
            cout << 'A'<< endl;
        else if(Sum >= 80 && Sum < 90)
        cout << 'B' << endl;
        else if(Sum >= 70 && Sum < 80)
        cout << 'C' << endl;
        else if(Sum >= 60 && Sum < 70)
        cout << 'D'<< endl;
        else if(Sum < 60)
        cout << 'F' << endl;
    }
    RT;
}
