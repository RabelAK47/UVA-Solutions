#include<stdio.h>

int main()
{
    long int n,a;
    while(scanf("%ld",&n)==1 && n>=0)
    {
        a=(n*(n+1)/2)+1;
        printf("%ld\n",a);
    }
    return 0;
}
