#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    int T, temp = 0; cin >> T;
    cin.ignore();
    cin.ignore();
    while(T--)
    {
        map <string, int> M; map <string, int> :: iterator it;
        string str; int Count = 0;

        while(getline(cin, str))
        {
            if(str.length() == 0)
                break;
            Count++;
            M[str]++;
        }
        if(temp == 1) cout << endl;
        temp = 1;
        double percent;

        for(it = M.begin(); it != M.end(); ++it)
        {
            cout << it->first << " ";
            percent = (100.00*it->second)/ Count;
            printf("%.04lf\n", percent);
        }
    }
    return 0;
}
