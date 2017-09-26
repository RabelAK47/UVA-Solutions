#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int A[1020],i,j,n,sum,test,b,avr;
    float ans;
    while(scanf("%d",&test)==1)
    {
        for(j=0;j<test;j++)
        {
            b=0;
            sum=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&A[i]);
            }
            for(i=0;i<n;i++)
                sum=sum+A[i];
                avr=sum/n;
                for(i=0;i<n;i++)
                    if(A[i]>avr)
                    b=b+1;
                ans=((float)b/(float)n);
                printf("%.3f%%\n",ans*100);
        }
    }
return 0;
}
