#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        int A, B = 0;
        cin >> A;
        string str;
        getline(cin,str);
        if(str.length() > 3)
            B = str[3] - '0';
        cout << "Case " << ++Case << ": " << A*0.5 + B*0.05 << endl;
    }
    return 0;
}
