#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a,b,button,d;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
        {
            return 0;
        }
        button=abs(a-b);
        if(button>50)
        {
            button=100-button;
        }
        printf("%d\n",button);
    }
    return 0;
}
