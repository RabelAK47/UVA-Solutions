#include "bits/stdc++.h"
using namespace std;


bool isvowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}
main()
{
    //freopen("WA.txt", "w", stdout);
    char CH;
    while(scanf("%c", &CH) == 1)
    {
        if(isvowel(CH))
        {
            printf("%c", CH);
            while(scanf("%c", &CH) == 1)
            {
                if(isalpha(CH) == false)
                    break;
                printf("%c", CH);
            }
            printf("ay%c", CH);
        }
        else if(isalpha(CH))
        {
            char temp = CH;
            while(scanf("%c", &CH) == 1)
            {
                if(isalpha(CH) == false)
                    break;
                printf("%c", CH);
            }
                printf("%cay%c", temp, CH);
        }
        else
            printf("%c", CH);
    }
    return 0;
}
