#include<stdio.h>
int main()
{
    int year,flag;
    while(scanf("%d",&year)==1 && year>=2000)
    {
        if((year%4==0 && year%100!=0) || year%400==0)
        {
            printf("This is leap year.\n");
            flag=1;
        }
        else if(year%15==0)
        {
            printf("This is huluculu festival year.\n");
        }
        else if(year%55==0 && flag==1)
        {
            printf("This is bulukulu festival year.\n");
        }
        else
            printf("This is an ordinary year.\n");
    }
    return 0;
}
