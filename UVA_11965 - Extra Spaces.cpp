#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        int N;
        Case++;
        cin >> N;
        cin.ignore();

        if(Case != 1) cout << endl;
        cout << "Case " << Case << ":" << endl;

        for(int i = 0; i < N; i++)
        {
            string str;
            getline(cin,str);
            if(str.length() >  0) cout << str[0];
            for(int j = 1; j < str.length(); j++)
            {
                if(str[j] != ' ' || str[j] != str[j-1])
                {
                    cout << str[j];
                }
            }
          cout << endl;
        }
    }
    return 0;
}
