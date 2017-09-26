#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin >> str && str[0] != '0')
    {
        int Multi = 0, Sum;

        for(int i = 0; i < str.length(); i++)
        {
            Sum = Multi*10 + (str[i] - '0');
            Multi = Sum % 17;
        }

        if(Multi == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
