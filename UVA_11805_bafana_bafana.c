#include<stdio.h>
int main()
{
    int i,j,a,b,c,t,result,flag, Case= 0;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            Case++;
            scanf("%d %d %d",&a,&b,&c);
            result = b+c;
            while(result>a)
            {
                result = result-a;
            }
            printf("Case %d: %d\n",Case,result);
        }
    }
    return 0;
}

