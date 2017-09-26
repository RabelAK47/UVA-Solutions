#include "bits/stdc++.h"
using namespace std;

int main()
{
    long int L;
    while(cin >> L && L)
    {
        string str, temp;
        cin >> str; temp = str; sort(temp.begin(),temp.end()); bool t = binary_search(temp.begin(),temp.end(), 'Z');
        if(t)
        {
            cout << 0 << endl;
            continue;
        }

        int minDistance = L;
        int LastR = -L, LastD = -L;

        for(int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'R')
            {
                LastR = i;
                minDistance = min(minDistance, LastR - LastD);
            }
            else if(str[i] == 'D')
            {
                LastD = i;
                minDistance = min(minDistance, LastD - LastR);
            }
        }

        cout << minDistance << endl;
    }
    return 0;
}
