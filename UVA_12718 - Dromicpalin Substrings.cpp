#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    int T, Case = 0; cin >> T; cin.ignore();
    while(T--)
    {
        string str; cin >> str;
        int Dromicpalin = 0;
        for(int i = 0; i < str.length(); i++)
        {
            int Count = 0;
            map <char, int > Map;
            string sub = str.substr(i,str.length());

            for(int j = 0; j < sub.length(); j++)
            {
                if(++Map[sub[j]] % 2 == 0)
                    Count--;
                else Count++;
                if(Count <= 1) Dromicpalin++;
            }

        }
        cout << "Case " << ++Case << ": " << Dromicpalin << endl;
    }
    return 0;
}
