#include "bits/stdc++.h"
using namespace std;

#define LL          long long int
#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}


main()
{
    Faster;
    string str;
    while (getline(cin, str))
    {
        if (str[0] != '|') continue;
        char Count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ' || str[i] == 'o')
            {
                Count = Count << 1;
                if(str[i] == 'o')
                    Count++;
            }
        }
        printf("%c",Count);
    }
    return 0;
}
