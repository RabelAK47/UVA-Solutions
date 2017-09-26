#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    string str;
    while(cin >> str)
    {
        list <char> LL;
        list <char> :: iterator it;
        it = LL.begin();
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '[')
                it = LL.begin();
            else if(str[i] == ']')
                it = LL.end();
            else LL.insert(it, str[i]);
        }
        for(it = LL.begin(); it != LL.end(); ++it)
            cout << *it;
        cout << endl;
    }
    return 0;
}
