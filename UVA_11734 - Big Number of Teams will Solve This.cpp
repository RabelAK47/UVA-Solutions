#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0;
    cin >> T;
    cin.ignore();

    while(T--)
    {
        Case++;
        string str1, str2;
        getline(cin,str1);
        getline(cin,str2);

        cout << "Case " << Case << ": ";
        if(str1 == str2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            string strAns;
            for(int i = 0; i < str1.length(); i++)
            {
                if(isspace(str1[i]))
                    continue;
                else
                    strAns += str1[i];
            }

            if(str2 == strAns)
            {
                cout << "Output Format Error" << endl;
            }
            else
            {
                cout << "Wrong Answer" << endl;
            }
        }
    }
    return 0;
}
