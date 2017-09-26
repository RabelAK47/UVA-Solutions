#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    while(scanf("%d",&T)==1)
    {
        for(int test = 1; test <= T; test++)
        {
            int A[10], Count = 0;
            for(int i = 1; i <= 5; i++)
                scanf("%d",&A[i]);

            for(int i = 1; i <= 4; i++)
            {
                if(A[i+1] == A[i] + 1)
                {
                    Count++;
                }
            }
            Count == 4 ? printf("Y\n") : printf("N\n");
        }
    }
}
