#include <stdio.h>

int main()
{
    int n, i, j, array[1000], sum=0;

    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&array[i]);
        }
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                 if(array[i] > array[j])
                    sum=sum+1;
            }
        }
        printf("Minimum exchange operations : %d\n",sum);
    }
    return 0;
}
