#include <stdio.h>

int main()
{
    int a,i,sum;
    while(scanf("%d",&a)==1)
    {
        sum=0;
        for(i=1; i<=a; i++)
        {
            if(i%2!=0)
            {
                sum+=1;
            }
            else if(i%2==0)
            {
                sum+=2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
