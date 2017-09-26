#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long int N;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        long  A=0,B=1,C=0;
        for(int i=1;i<=N;i++)
            {
                C=A+B;
                A=B;
                B=C;
            }
            cout<<C<<endl;
    }
    return 0;
}
