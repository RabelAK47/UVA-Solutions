#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str;
    while(cin >> str && str != "0")
    {
        if(str.length() % 2 == 0)
        {
            int N = (str[0]-'0') * 10 + str[1]-'0';
            int sq = sqrt(N);
            cout << sq;
            for(int i = 0; i < (str.length() - 2) / 2 ; i++)
            {
                cout << '0';
            }
            cout << endl;
            continue;
        }
        else
        {
            int N = str[0] - '0';
            int sq = sqrt(N);
            cout << sq;
            for(int i = 0; i < (str.length()-1) / 2; i++)
            {
                cout << '0';
            }
            cout << endl;
        }
    }
    return 0;
}
