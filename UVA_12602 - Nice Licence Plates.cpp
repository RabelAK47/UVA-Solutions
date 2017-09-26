#include "bits/stdc++.h"
using namespace std;
#define LL long long int
#define string_to_int(str) atoll(str.c_str());

main()
{
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        string str, sub1, sub2;;
        cin >> str;
        sub1 = str.substr(0,3);
        sub2 = str.substr(4,4);
        LL N = string_to_int(sub2);
        LL Sum = 0;
        Sum += (sub1[0]-'A')*26*26;
        Sum += (sub1[1]-'A')*26;
        Sum += (sub1[2]-'A');

        abs(Sum-N) <= 100 ? printf("nice\n") : printf("not nice\n");
    }
    return 0;
}
