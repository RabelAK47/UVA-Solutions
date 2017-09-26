#include "bits/stdc++.h"
using namespace std;

string str =  "0123456789";
string str2 = "OIZEASGTBP";
map <char, char> Mp;

int main()
{
    for(int i = 0; i < str.length(); i++)
        Mp[str[i]] = str2[i];
    int T;
    cin >> T;
    cin.ignore();
    for(int test = 0; test < T; test++)
    {
        string input;
        while(getline(cin,input) && input.length() != 0)
        {
            for(int i = 0; i < input.length(); i++)
            {
                if(Mp[input[i]])
                    cout << Mp[input[i]];
                else
                    cout << input[i];
            }
            cout << endl;
        }
        if(test != T-1)
            cout << endl;
    }
    return 0;
}
