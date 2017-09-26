#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int B,S, Case = 0;
    while(cin >> B >> S && B && S)
    {
        Case++;
        if(B == 1)
            cout << "Case " << Case << ": :-\\" << endl;
        else if(B <= S)
            cout << "Case " << Case << ": :-|" << endl;
        else
             cout << "Case " << Case << ": :-(" << endl;
    }
    return 0;
}
