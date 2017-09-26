#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    while(cin>>A>>B>>C)
    {
        if(A==B && B!=C)
        {
            printf("C\n");
        }
        else if(A==B && B==C)
        {
            printf("*\n");
        }
        else if(A!=B && A==C)
        {
            printf("B\n");
        }
        else
        {
            printf("A\n");
        }
    }
    return 0;
}
