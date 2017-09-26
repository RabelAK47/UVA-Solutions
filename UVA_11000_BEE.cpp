#include <bits/stdc++.h>
using namespace std;

long long fibonacci(long long n)
{
    long long i,a=0,b=1,c,sum=0;
       for(i=1;i<=n;i++)
         {
             c = a+b;
             a = b;
             b = c;
             sum+=c;
         }
    return sum;
}
int main()
{
    long long N , P, Q;
    while(cin >> N && N>=0)
    {
        if(n==0)
         printf("0 1\n");
         else if(n==1)
         printf("1 2\n");
         else
         {
          p = fibonacci(n);
          q = fibonacci(n-1);
         printf("%lld %lld\n",q+1,p+1);
         }
    }
    return 0;
}
