#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int T, Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        long int A, B, C;
        cin >> A >> B >> C;
        if(A==0 || B==0|| C==0 || (A+B<=C || B+C<=A || C+A<=B))
        {
            cout << "Case " << Case << ": Invalid" << endl;
        }
        else if(A==B && B==C && C==A)
        {
            cout << "Case " << Case << ": Equilateral" << endl;
        }
        else if((A!=B) && (B!=C) &&(C!=A))
        {
            cout << "Case " << Case << ": Scalene" << endl;
        }
        else if(A==B || B==C || C==A)
            cout << "Case " << Case << ": Isosceles" << endl;
    }
    return 0;
}
