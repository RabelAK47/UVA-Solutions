#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str1, str2;
    while(cin >> str1 >> str2)
    {
        int Count = 0;
        for(int i = 0; i < str1.length(); i++)
        {
            for(int j = 0; j < str2.length(); j++)
            {
                if(str1[i] == str2[j])
                {
                    Count++, i++;
                }
            }
        }
        Count == str1.length() ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
