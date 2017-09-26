#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
long int i,A[2000005];
int main()
{
    long int n;
    while(cin>>n && n>0 && n<=2000000)
    {
        for(i=0; i<n; i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        for(i=0; i<n; i++)
        {
            cout<<A[i];
            if (i<(n-1))
                {
                    printf(" ");
                }
        }
        cout<<endl;
    }
    return 0;
}
