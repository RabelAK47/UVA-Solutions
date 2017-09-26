#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    long int i,n,rev=0,R,sum=0,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        R=n;
        while(R!=0)
        {
            rev=rev*10;
            rev=rev+R%10;
            R=R/10;
        }
        if(rev==n)
        {
            printf("%ld \n",n);
        }
        sum=R+rev;
        printf("%ld\n",sum);
        return 0;
    }
}
