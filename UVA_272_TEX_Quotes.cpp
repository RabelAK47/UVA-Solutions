#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    string str;
    int Count = 0;
    char ch = '"';
    while(getline(cin,str))
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == ch)
            {
                Count++;
                Count % 2 != 0 ? cout << "``" : cout << "''";
            }
            else cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
