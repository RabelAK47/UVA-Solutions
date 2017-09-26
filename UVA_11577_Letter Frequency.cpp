#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++)
    {
        string str;
        getline(cin,str);

        map <char, int> Mp; map <char, int> :: iterator it;

        for(int j = 0; j < str.length(); j++)
        {
            str[j] = tolower(str[j]);
            if(isalpha(str[j]))
            Mp[str[j]]++;
        }

        vector <int> V;
        for(it = Mp.begin(); it != Mp.end(); ++it)
            V.push_back(it->second);

        int Max = *max_element(V.begin(),V.end());

        for(it = Mp.begin(); it != Mp.end(); ++it)
            if(it->second == Max)
                cout << it->first;
        cout << endl;
    }
}
