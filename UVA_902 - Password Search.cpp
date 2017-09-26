#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N;
    while(cin >> N)
    {
        string str;
        cin >> str;
        map<string, int> M;
        map <string, int> :: iterator it;

        for(int i = 0; i < str.length(); i++)
        {
            string sub = str.substr(i,N);
            M[sub]++;
        }

        vector <int> V;
        for(it = M.begin(); it != M.end(); ++it)
        {
            V.push_back(it->second);
        }
        int maxi = *max_element(V.begin(),V.end());
        bool flag = false;

        while(maxi > 0)
        {
            for(it = M.begin(); it != M.end(); ++it)
            {
                if(it->second == maxi)
                {
                    cout << it->first << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
            maxi--;
        }
    }
    return 0;
}
