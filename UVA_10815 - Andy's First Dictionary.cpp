#include "bits/stdc++.h"
#define LL long long int

using namespace std;
int main()
{
    //freopen("WA.txt", "w", stdout);
    set < string > St;
    string str;
    while(cin >> str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            string temp;
            while(isalpha(str[i]))
            {
                temp += tolower(str[i]);
                i++;
            }
            if(temp != "")
                St.insert(temp);
        }
    }
    for(set <string> :: iterator it = St.begin(); it != St.end(); ++it)
        cout << *it << endl;
    return 0;
}
