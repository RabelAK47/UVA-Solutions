#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;

long long unsigned GCD(long int i,long int j)
{
    long long unsigned int M;
    M= __gcd(i,j);
    return M;
}
int main()
{
    long long unsigned  int T,k,N;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        long long unsigned int G=0,K=0;
        for(long int i=1;i<N;i++)
        {
            for(long int j=i+1;j<=N;j++)
            {
                K=GCD(i,j);
                G+=K;
            }
        }
            cout << G << endl;
    }
}
