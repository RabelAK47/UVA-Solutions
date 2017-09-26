#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if(A + B > C)
            cout << "OK" << endl;
        else
        cout << "Wrong!!" << endl;
    }
    return 0;
}


