#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    string line;
    while(getline(cin, line))
    {
        string check;
        getline(cin, check);

        stringstream is1(line), is2(check);
        string str1, str2, Ans1 = "", Ans2 = "";
        while(is1 >> str1) Ans1 += str1[0];
        while(is2 >> str2) Ans2 += str2[0];

        Ans1 == Ans2 ? printf("yes\n") : printf("no\n");
    }
    return  0;
}
