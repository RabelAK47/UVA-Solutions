#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, n, x, y, z, ans, res;
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>x>>y>>z;
            res=x+y;
            ans=z*(2*x-y)/res;
            printf("%d\n",ans);
        }
    }
    return 0;
}
