//110 / 100
//99 % 10
//2147483647 / 2147483647
//2147483646 % 2147483647
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long unsigned A, B;
    while(cin >> A && A)
    {
        char Ch;
        cin >> Ch;
        cin >> B;
        if(Ch == '%')
        {
            cout << A % B << endl;
        }
        else if(Ch == '/')
        {
            cout << A / B << endl;
        }
    }
    return 0;
}

