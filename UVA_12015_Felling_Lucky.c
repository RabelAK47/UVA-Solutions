#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],g[1000],h[1000],ii[1000],jj[1000];
    int k[1000],n,max,j,t=1,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%s%d",a,&k[0]);
            scanf("%s%d",b,&k[1]);
            scanf("%s%d",c,&k[2]);
            scanf("%s%d",d,&k[3]);
            scanf("%s%d",e,&k[4]);
            scanf("%s%d",f,&k[5]);
            scanf("%s%d",g,&k[6]);
            scanf("%s%d",h,&k[7]);
            scanf("%s%d",ii,&k[8]);
            scanf("%s%d",jj,&k[9]);
            max=0;
            for(j=0; j<10; j++)
            {
                if(k[j]>max)
                    max=k[j];
            }
            printf("Case #%d:\n",t++);
            for(j=0; j<10; j++)
            {
                if(k[j]==max)
                {
                    if(j==0) puts(a);
                    if(j==1) puts(b);
                    if(j==2) puts(c);
                    if(j==3) puts(d);
                    if(j==4) puts(e);
                    if(j==5) puts(f);
                    if(j==6) puts(g);
                    if(j==7) puts(h);
                    if(j==8) puts(ii);
                    if(j==9) puts(jj);
                }
            }
        }
    }
    return 0;
}

