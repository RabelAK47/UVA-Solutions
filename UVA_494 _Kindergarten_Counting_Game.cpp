#include <bits/stdc++.h>
using namespace std;

int main()
{
    char word[100];
    int i,j,len,Count=0;
    while(gets(word))
     {
         Count=0;
         for(i=0; word[i]!='\0'; i++)
            {
                if(
                    ( (word[i]>='a'&& word[i]<='z')||
                        (word[i]>='A' && word[i]<='Z')
                    )
                                    &&
                        (word[i+1]<'a' || word[i+1]>'z')
                                    &&
                        (word[i+1]<'A' || word[i+1]>'Z')
                    )
               Count++;
            }
        printf("%d\n",Count);
     }
    return 0;
}
