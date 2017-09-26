#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1005];
    int len, i, ans;
    while(scanf("%s",&str)==1)
        {
            ans = 0;
            len = strlen(str);
            for(i=0;i<len;i++)
                {
                    ans = ans*10 + str[i]-'0';
                    ans = ans%11;
                }
                if(ans==0 && len==1)
                    {
                        break;
                    }
                else if(ans==0)
                    {
                        printf("%s is a multiple of 11.\n",str);
                    }
                    else
                        {
                            printf("%s is not a multiple of 11.\n",str);
                        }
            }
        return 0;
}
