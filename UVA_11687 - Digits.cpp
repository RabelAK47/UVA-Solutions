#include "bits/stdc++.h"
using namespace std;
#define LL long long int

LL Rec(LL i, string str)
{
    LL Digit = str.length();
    ostringstream ss;
    ss << Digit;

    if (ss.str() == str)
        return i;
    return Rec(i + 1, ss.str());
}

main()
{
    string str;
    while(cin >> str && str != "END")
    {
        cout << Rec(1, str) << endl;
    }
    return 0;
}
