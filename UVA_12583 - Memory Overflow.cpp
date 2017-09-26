#include "bits/stdc++.h"
using namespace std;

int main()
{
//    freopen("OutU.txt", "w", stdout);
    int t, Case = 0;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string str, temp;
        long int N, K;

        cin >> N >> K >> str;
        Case++;
        long int Count = 0, Uncheck = 0;

        for(int j = 0; j < str.length(); j++)
        {
            if(j < K)
            {
                for(int L = 0; L < j; L++)
                {
                    if(str[j] == temp[L])
                    {
                        Count++;
                        break;
                    }
                }
            }

            else
            {
                for(int L = Uncheck; L < j; L++)
                {
                    if(str[j] == temp[L])
                    {
                        Count++;
                        break;
                    }
                }
                Uncheck++;
            }
            temp += str[j];
        }
        cout << "Case " << Case << ": " << Count << endl;
    }

    return 0;
}
