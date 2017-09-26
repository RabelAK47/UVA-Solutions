#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        int D1, M1, Y1;
        int D2, M2, Y2;
        char C1, C2, C3, C4;

        cin >> D1 >> C1 >> M1 >> C2 >> Y1;
        cin >> D2 >> C3 >> M2 >> C4 >> Y2;

        int Age = Y1 - Y2;

        cout << "Case #" << Case << ": ";

        if(Y1 < Y2)
        {
            cout << "Invalid birth date" << endl;
            continue;
        }
        else if(Y1 == Y2)
        {
            if(M1 < M2 || (M1 == M2 && D1 < D2))
            {
                cout << "Invalid birth date" << endl;
                continue;
            }
        }
        else if(Y1 > Y2)
        {
            if(M1 < M2 || (M1 == M2 && D1 < D2))
            {
                Age -= 1;
            }
        }
        if(Age > 130)
        {
            cout << "Check birth date" << endl;
        }
        else
            cout << Age << endl;
    }
    return 0;
}


