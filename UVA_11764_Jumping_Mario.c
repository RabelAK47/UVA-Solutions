#include<stdio.h>
int main()
{
    int n,i,j,k,t,value[500],high,low,T;
    while(scanf("%d",&t)==1)
    {
        for(T=1; T<=t; T++)
        {
            high=0;low=0;
            scanf("%d",&n);
            for(j=0; j<n ;j++)
            {
                scanf("%d",&value[j]);
            }
//            for(j=1; j<n; j++)
//            {
//                if(value[j]>value[j-1])
//                {
//                    high=high+1;
//                }
//                if(value[j]<value[j-1])
//                {
//                    low=low+1;
//                }
//            }
                for(j = 0; j < n-1; j++)
                {
                    if(value[j] > value[j+1])
                    {
                        low++;
                    }
                    else if(value[j] < value[j+1])
                    {
                        high++;
                    }
                }
            printf("Case %d: %d %d\n",T,high,low);
        }
    }
    return 0;
}
