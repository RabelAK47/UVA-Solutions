#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N;
    cin >> N;
    map<string, int> M;
    set<string>S;
    set<string> :: iterator it;

    while(N--)
    {
        string str, str2;
        cin >> str;
        M[str]++;
        S.insert(str);
        getline(cin,str2);
    }

    for(it = S.begin(); it != S.end(); it++)
    {
        cout << *it << ' ' << M[*it] << endl;
    }
    return 0;
}
