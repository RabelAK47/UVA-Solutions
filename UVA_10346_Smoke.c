#include <stdio.h>

int main()
{
    int n,k,ans;
    while(scanf("%d %d",&n,&k)==2&&k>1)
    {
        ans=n+(n-1)/(k-1);
        printf("%d\n",ans);
    }
    return 0;
}
