#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,X,N,res,Fin,B[100];
    while(scanf("%d",&N)==1)
    {
        for(i=1; i<=N; i++)
        {
            res=i/sqrt(N-i);
            if(res==1)
            {
                Fin=B[i];
            }
            else
                break;
        }
         printf("%d\n",Fin);
    }
    return 0;
}
