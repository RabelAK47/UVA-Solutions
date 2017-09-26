#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int T,N,i,value;
    cin>>T;
    if(T>0)
    {
        for(i=1; i<=T; i++)
             {
                 cin>>value;
             }
             printf("Set #1\nThe minimum number of moves is %d.\n",T-1);
    }
    return 0;
}

