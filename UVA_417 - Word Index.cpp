#include "bits/stdc++.h"
using namespace std;
#define LL long long int

map <string, LL> Mp;
string str = "abcdefghijklmnopqrstuvwxyz";

void SET()
{
    LL P = 1;
    string temp, str1, str2, str3, str4, str5;
    for(int i = 0; i < 26; i++)
    {
        temp = str[i];
        Mp[temp] = P;
        P++;
    }

    for(int i = 0; i < 26; i++)
    {
        for(int j = i+1; j < 26; j++)
        {
            str1 = str[i], str2 = str[j];
            temp = str1 + str2;
            Mp[temp] = P;
            P++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        for(int j = i+1; j < 26; j++)
        {
            for(int k = j+1; k < 26; k++)
            {
                str1 = str[i], str2 = str[j], str3 = str[k];
                temp = str1 + str2 + str3;
                Mp[temp] = P;
                P++;
            }
        }
    }

    for(int i = 0; i < 26; i++)
    {
        for(int j = i+1; j < 26; j++)
        {
            for(int k = j+1; k < 26; k++)
            {
                for(int L = k+1; L < 26; L++)
                {
                    str1 = str[i], str2 = str[j], str3 = str[k], str4 = str[L];
                    temp = str1 + str2 + str3 + str4;
                    Mp[temp] = P;
                    P++;
                }
            }
        }
    }

    for(int i = 0; i < 26; i++)
    {
        for(int j = i+1; j < 26; j++)
        {
            for(int k = j+1; k < 26; k++)
            {
                for(int L = k+1; L < 26; L++)
                {
                    for(int t = L+1; t < 26; t++)
                    {
                        str1 = str[i], str2 = str[j], str3 = str[k], str4 = str[L], str5 = str[t];
                        temp = str1 + str2 + str3 + str4+ str5;
                        Mp[temp] = P;
                        P++;
                    }
                }
            }
        }
    }
    return;
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    SET();
    string s;
    while(cin >> s)
        printf("%lld\n",Mp[s]);
    return 0;
}
