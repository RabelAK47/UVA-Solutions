#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long long int i, j, N, T, ans;
    while(cin>>T)
    {
        for(i=1; i<=T; i++)
        {
            cin>>N;
            ans = N*(N-1)/2;
            if (ans%2)
            {
                printf("Case %lld: %lld/2\n", i,ans);
            }
            else
            {
                printf("Case %lld: %lld\n",i, ans/2);
            }
        }
    }
    return 0;
}
