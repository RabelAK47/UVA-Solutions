#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A[100] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,105};
    int n, temp, i, Count, c1;

    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        printf("%3d! =",n);
        c1=0;
        for(i=0; A[i]<=n; i++)
        {
            temp=n;
            Count=0;
            while(temp != 0)
            {
                temp = temp/A[i];
                Count=Count+temp;
            }
            if(c1==15)
            {
                printf("\n      ");
            }
            printf("%3d",Count);
            c1++;
        }
        printf("\n");
    }
    return 0;
}

