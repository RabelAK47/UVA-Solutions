#include <stdio.h>
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <algorithm>
#define max 10000001
using namespace std;

int prime (long long int N)
{
    long long int i, sq;
    sq = (int)sqrt(N);
    if(N<2) return 0;
    for(i=2; i<=sq; i++)
    {
        if(N%i==0) return 0;
    }
    return 1;
}
long long int rev (long long int N)
{
    int revv = 0;
    while(N!=0)
    {
        revv = revv * 10;
        revv = revv + N%10;
        N = N/10;
    }
    return revv;
}
int main()
{
     long long int i, j, N;
     while(cin>>N)
        {
            cout<<N*2<<endl;
            if( rev(N) ==N && prime(rev(N))==1)
           {
                break;
           }
        }
    return 0;
}
