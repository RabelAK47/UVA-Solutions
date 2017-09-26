#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL N, Case = 0;
    cin >> N;
    cin.ignore();
    while(N--)
    {
        string str;
        cin >> str;
        stack <char> St;
        map <char, int> M;
        St.push(str[0]);
        Case++;

        for(int i = 1; i < str.length() - 1 ; i++)
        {
            if(str[i] == St.top())
            {
                M[St.top()]++;
                St.pop();
                M[St.top()]++;
            }
            else St.push(str[i]);
        }
        map <char, int> :: iterator it;
        cout << "Case " << Case << endl;

        for(it = M.begin(); it != M.end(); ++it)
        {
            cout << it->first << " = " << it->second << endl;
        }
    }
    return 0;
}
