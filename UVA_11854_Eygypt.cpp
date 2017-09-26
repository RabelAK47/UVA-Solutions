#include "bits/stdc++.h"
using namespace std;

int main()
{
    long int A, B, C;
    while(cin >> A >> B >> C)
    {
        long int temp1, temp2, temp3;

        temp1 = pow(A,2);
        temp2 = pow(B,2);
        temp3 = pow(C,2);

        if(A == 0 && B == 0 && C ==0)
        {
            return 0;
        }
        else if( (temp1 == temp2 + temp3) || (temp2 == temp1 + temp3) || (temp3 == temp1 + temp2) )
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
    return 0;
}
