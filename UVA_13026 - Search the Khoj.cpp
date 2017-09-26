#include "bits/stdc++.h"
using namespace std;
int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        int N; cin >> N;
        vector <string> V;
        for(int i = 0; i < N; i++)
        {
            string str; cin >> str;
            V.push_back(str);
        }
        string str; cin >> str;
        cout << "Case " << ++Case << ":" << endl;
        for(int i = 0; i < N; i++)
        {
            string str2 = V[i];
            int Count = 0;
            for(int j = 0; j < str2.length(); j++)
            {
                if(str[j] != str2[j])
                    Count++;
            }
            if(Count <= 1) cout << str2 << endl;
        }
    }
    return 0;
}
