#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
   // char str[1000];
    while(cin >> str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            char Ch = str[i] - 7;
            cout << Ch;
        }
        cout << endl;
    }
    return 0;
}
