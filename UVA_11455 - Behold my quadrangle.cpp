#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int Arr[5];
        Arr[0] = A, Arr[1] = B, Arr[2] = C, Arr[3] = D;
        sort(Arr,Arr+4);
        if(A == B && B == C && C == D)
        {
            cout << "square" << endl;
        }
        else if(Arr[0] == Arr[1] && Arr[2] == Arr[3])
        {
            cout << "rectangle" << endl;
        }
        else if((A<= B+C+D) && (B<= C+D+A) && (C<=D+A+B) && (D<=A+B+C) )
        {
            cout << "quadrangle" << endl;
        }
        else
            cout << "banana" << endl;
    }
    return 0;
}

