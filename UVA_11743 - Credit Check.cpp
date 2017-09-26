#include "bits/stdc++.h"
using namespace std;

int main()
{
    //250 Number AC :D
    int T;
    cin >> T;
    while(T--)
    {
        string str1, str2, str3, str4;
        cin >> str1 >> str2 >> str3 >> str4;
        (((str1[0]-'0')*2/10 + (str1[0] - '0')*2%10 + (str1[2]-'0')*2/10 + (str1[2] - '0')*2%10) + ((str2[0] - '0') *2/10 + (str2[0] - '0')*2%10 + (str2[2]-'0')*2/10 + (str2[2] - '0')*2%10) + ((str3[0] - '0') *2/10 + (str3[0] - '0')*2%10 + (str3[2]-'0')*2/10 + (str3[2] - '0')*2%10) + ((str4[0] - '0') *2/10 + (str4[0] - '0')*2%10 + (str4[2]-'0')*2/10 + (str4[2] - '0')*2%10) + (str1[1] - '0' + str1[3]-'0' + str2[1] - '0' + str2[3] - '0' + str3[1]-'0' + str3[3]-'0' + str4[1]-'0' + str4[3]-'0')) % 10 == 0 ? cout << "Valid" << endl : cout << "Invalid" << endl;;
    }
    return 0;
}
