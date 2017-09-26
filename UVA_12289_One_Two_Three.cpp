#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,len;
    char name[10];
    cin>>n;
    while(n--)
    {
        cin>>name;
        len=strlen(name);
        if(len==5)
        {
            printf("3\n");
        }
        else if ((name[0] == 't' &&  name[1] == 'w') || (name[0] == 't' && name[2] == 'o')
                 ||(name[1] == 'w' && name[2] == 'o' ))
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
