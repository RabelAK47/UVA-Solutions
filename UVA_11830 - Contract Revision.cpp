#include "bits/stdc++.h"
using namespace std;
#define LL long long int
int main()
{
    string str;
    char Ch;
    while(cin >> Ch)
    {
        cin >> str;
        if(Ch == '0' && str == "0")
            break;

        string str2;
        LL Count = 0, j = 0;
        for(LL i = 0; i < str.length(); i++)
        {
            if(str[i] != Ch)
            {
                str2 += str[i];
                if(str2[j] == '0')
                {
                    Count++;
                    j++;
                }
            }
        }
        if(str2 == "")
        {
            cout << 0 << endl;
            continue;
        }
        if(Count == str2.length())
        {
            cout << 0 << endl;
            continue;
        }
        cout << str2 << endl;
    }
    return 0;
}
