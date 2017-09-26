#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    //freopen("ANY.txt", "w", stdout);
    LL N, Case = 0;
    cin >> N;
    cin.ignore();
    while(N--)
    {
        string str;
        cin >> str;
        map <char, int> M;
        vector <int> V;
        Case++;
        for(int i = 0; i < str.length(); i++)
        {
            M[str[i]]++;
        }
        if(M.size() < 26)
        {
            cout << "Case " << Case << ": 0" << endl;
            continue;
        }
        map<char,int> :: iterator it;
        for(it = M.begin(); it!= M.end(); ++it)
        {
            V.push_back(it->second);
        }
        cout << "Case " << Case << ": " << *min_element(V.begin(),V.end()) << endl;
    }
    return 0;
}
