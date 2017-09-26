#include<stdio.h>
#include<math.h>

int main()
{
    long int n,r;

    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        r=sqrt(n);
        if(r*r==n)
        printf("yes");
        else
        printf("no");
    }
    return 0;
}
