#include "bits/stdc++.h"
using namespace std;

int main()
{
    long int T, Case = 0;
    cin >> T;
    while(T--)
    {
        long int N, Count = 0;
        string str;
        cin >> N >> str;
        Case++;
        for(int i = 0; i <= str.length(); )
        {
            if(str[i] == '.')
                Count++, i += 3;
            else
                i++;
        }
        cout << "Case " << Case << ": " << Count << endl;
    }
    return 0;
}
