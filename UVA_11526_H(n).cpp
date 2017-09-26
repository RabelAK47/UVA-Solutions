#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

long long ans(int n)
{
    int root = int(sqrt(n)) + 1;
    long long res = 0;
    for(int i=1; i < root; i++)
    {
        res += n/i;
    }
    root--;
    res = 2*res - root*root;
    return res;
}

int main()
{
    long int t,i,n,res,root;
    cin>>t;
    while(t--)
    {
        cin>>n;
        printf("%lld\n",ans(n));
    }
    return 0;
}
