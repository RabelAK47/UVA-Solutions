#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("Mustak.txt", "w", stdout);
    long int T;
    cin >> T;
    cin.ignore();
    while(T--)
    {
        string str;
        cin >> str;
        long int Count = 0;
        map<char,int> M;
        map<char,int> :: iterator it;

        for(int i = 0; i < str.length(); i++)
        {
            M[str[i]]++;
        }
        vector <int > V;
            V.push_back(M['A']/3);
            V.push_back(M['R']/2);
            V.push_back(M['M']);
            V.push_back(M['G']);
            V.push_back(M['I']);
            V.push_back(M['T']);

        cout << *min_element(V.begin(),V.end()) << endl;
    }
    return 0;
}
