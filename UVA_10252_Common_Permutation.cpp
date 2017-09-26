#include <bits/stdc++.h>
using namespace std;
string str1, str2;
int main()
{
    while(getline(cin, str1) && getline(cin, str2))
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        int i = 0, j = 0;
        while(i != str1.length() && j != str2.length())
        {
            if(str1[i] == str2[j])
            {
                cout << str1[i];
                i++, j++;
            }
            else
            {
                if(str1[i] > str2[j])
                {
                    j++;
                }
                else
                {
                    i++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
