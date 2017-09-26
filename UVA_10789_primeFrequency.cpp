#include<stdio.h>
#include<string.h>
#include<math.h>

long int is_prime(long int n)
{
    int i, root;
    if(n<=1)
        return 0;
        else if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[10000];
    long int i,j,test,len,t,maxi;
    scanf("%ld",&test);
    for(t=1; t<=test; t++)
    {
        long int cal[10000]={0};
        scanf("%s",str);
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            cal[str[i]]++;
        }
        printf("Case %ld: ",t);
        maxi=0;
        for(i=45; i<=140; i++)
        {
            if(is_prime(cal[i])==1)
            {
                printf("%c",i);
                maxi=1;
            }
        }
        if(maxi==0)
            {
                printf("empty");
            }
        printf("\n");
    }
    return 0;
}
