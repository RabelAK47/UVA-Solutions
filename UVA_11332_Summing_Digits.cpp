#include "bits/stdc++.h"
using namespace std;
#define LL long long int

void Test(string str)
{
    LL Sum = 0;
    for(int i = 0; i < str.length(); i++)
        Sum += str[i]-'0';

    if(Sum >= 0 and Sum <= 9)
    {
        cout << Sum << endl;
        return;
    }
    ostringstream con;
    con << Sum;
    str = con.str();
    Test(str);
}

int main()
{
    string str;
    while(cin >> str and str != "0")
        Test(str);
    return 0;
}
