#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

int main()
{
    string str1, str2;
    while(cin >> str1 >> str2)
    {
        if(str1 == "0" and str2 == "0")
            return 0;
        if(str1.length() < str2.length())
        {
            LL dif = str2.length()-str1.length();
            string temp = "";
            for(int i = 0; i < dif; i++)
                temp += '0';
            str1 = (temp + str1);
        }
        else if(str1.length() > str2.length())
        {
            LL dif = str1.length()-str2.length();
            string temp = "";
            for(int i = 0; i < dif; i++)
                temp += '0';
            str2 = (temp + str2);
        }

        LL Carry = 0, Count = 0;
        for(int i = str1.length()-1; i >= 0; i--)
        {
            LL check = str1[i]-'0' + str2[i]-'0' + Carry;
            if(check >= 10)
                Carry = 1, Count++;
            else
                Carry = 0;
        }
        if(Count == 0)
            printf("No carry operation.\n");
        else if(Count == 1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n", Count);
    }
    return 0;
}
