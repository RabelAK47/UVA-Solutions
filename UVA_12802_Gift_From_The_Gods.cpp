#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long int A[100000]= {2, 3, 5, 7, 11, 101, 131, 151, 181, 191,
    313, 353, 373, 383, 727, 757, 787, 797, 919, 929,
    10301, 10501, 10601, 11311, 11411, 12421, 12721, 12821, 13331, 13831,
    13931, 14341, 14741, 15451, 15551, 16061, 16361, 16561, 16661,
    17471, 17971, 18181};
    long int n,i;
    while(cin>>n)
    {
        for(i=0; i<100000; i++)
        {
            if(n==A[i])
            {
                printf("%ld\n",2*n);
                return 0;
            }
        }
        printf("%ld\n",2*n);
    }
    return 0;
}
