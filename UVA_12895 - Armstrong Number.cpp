#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

LL Len;
LL PowCal(LL rem)
{
    LL temp = 1;
    for(int i = 1; i <= Len; i++)
        temp *= rem;
    return temp;
}

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        string str;
        cin >> str;
        LL Sum = 0;
        Len = str.length();

        for(int i = 0; i < Len; i++)
            Sum += PowCal(str[i]-'0');

        ostringstream Con;
        Con << Sum;
        string res = Con.str();
        str == res ? printf("Armstrong\n") : printf("Not Armstrong\n");
    }
    return 0;
}
