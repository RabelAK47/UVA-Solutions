#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
        Case++;
        cout << "Case " << Case << ": ";
        for(int i = 0; i < str.length(); i++)
        {
            char Ch;
            int value = 0;
            if(isalpha(str[i]))
            {
                Ch = str[i];
            }
            else if(isdigit(str[i]))
            {
                value += str[i] - '0';
                i++;
                while(isdigit(str[i]))
                {
                    value = value*10 + str[i] - '0';
                    i++;
                }
                i--;
                for(int j = 0; j < value; j++)
                {
                    cout << Ch;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
