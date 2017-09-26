#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T, Case = 1;
    scanf("%lld", &T);
    cin.ignore(), cin.ignore();
    while(T-- > 0)
    {
        printf("Case #%lld:\n", Case++);
        string line;
        while(getline(cin, line) and line[0] != '\0')
        {
            string str;
            stringstream IS(line);
            LL Count = 1;
            while(IS >> str)
            {
                if(str.length() >= Count)
                {
                    printf("%c", str[Count-1]);
                    Count++;
                }
            }
            printf("\n");
        }
        if(T)
            printf("\n");
    }
    return 0;
}
