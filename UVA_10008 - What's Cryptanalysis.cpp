#include "bits/stdc++.h"
using namespace std;

int main()
{
    long N;
    map<char,long>M;
    cin >> N;
    cin.ignore();
    while(N--)
    {
        string str, str2;
        getline(cin,str);
        for(int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                str2 += toupper(str[i]);
            }
        }

        for(int i = 0; i < str2.length(); i++)
        {
            M[str2[i]]++;
        }
    }
    map<char,long> :: iterator it;
    long  maxi = 0;

    for (it = M.begin(); it != M.end() ; ++it)
    {
        if(maxi < it->second)
            maxi = it->second;
    }

    while(maxi)
    {
        for(it = M.begin(); it!=M.end(); ++it)
        {
            if(it->second==maxi)
            {
                cout << it->first << ' ' << it->second << endl;
            }
        }
        maxi--;
    }
    return 0;
}
