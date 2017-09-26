#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    //freopen("WA.txt", "w", stdout);
    string str;
    while(cin >> str)
    {
        LL pos = 1;
        map <char, LL> Mp;
        for(int i = 0; i < str.length(); i++)
        {
            if(Mp[str[i]] == 0)
                Mp[str[i]] = pos, pos++;
        }
        for(int i = 0; i < str.length(); i++)
        {
            LL temp = Mp[str[i]];
            ostringstream Con;
            Con << temp;
            string str2 = Con.str();
            for(int j = 0; j < str2.length(); j++)
            {
                if(str2[j] == '2')
                    printf("5");
                else if(str2[j] == '5')
                    printf("2");
                else if(str2[j] == '6')
                    printf("9");
                else if(str2[j] == '9')
                    printf("6");
                else
                    printf("%c", str2[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
