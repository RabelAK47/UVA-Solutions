#include "bits/stdc++.h"
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        map <char,int> M;
        map <char, int> :: iterator it;
        for(int i = 0; i < str.length(); i++)
            if(isalpha(str[i]))
            M[str[i]]++;

        vector <int> V;
        for(it = M.begin(); it != M.end(); ++it)
            V.push_back(it->second);

        int temp =  *max_element(V.begin(),V.end());
        for(it = M.begin(); it != M.end(); ++it)
                if(it->second == temp)
                    cout << it->first;
        cout << " " << temp << endl;
    }
    return 0;
}
