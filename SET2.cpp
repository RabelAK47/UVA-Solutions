#include "bits/stdc++.h"
using namespace std;

int main()
{
    char str[1000];
    while(gets(str))
    {
       // :( equals sad.  :"> A blush ;) wink :D a grin :-> smug :P tongue out <3 for a heart  :O sometimes
        int Count = 0;
        for(int i = 0; i < strlen(str); i++)
        {
            if((str[i] == ':' && str[i+1] == '('))
            {
                Count++;
            }
            else if((str[i] == ':' && str[i+1] == '"' && str[i+2] == '>'))
            {
                Count++;
            }
            else if((str[i] == ';' && str[i+1] == ')'))
            {
                Count++;
            }
            else if((str[i] == ':' && str[i+1] == 'D'))
            {
                Count++;
            }
            else if((str[i] == ':' && str[i+1] == 'P'))
            {
                Count++;
            }
            else if((str[i] == ':' && str[i+1] == '-' && str[i+2] == '>' ) )
            {
                Count++;
            }
            else if((str[i] == '<' || str[i+1] == '3'))
            {
                Count++;
            }
            else if((str[i] == ':' && str[i+1] == 'O'))
            {
                Count++;
            }
        }
        cout << Count  << endl;
    }
}
//:( hehe :"> A blush ;) wink :D a grin :-> smug :P tongue out <3 for a heart   :O sometimes
