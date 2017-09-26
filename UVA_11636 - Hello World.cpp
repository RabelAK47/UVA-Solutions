#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("HEY.txt", "w", stdout);
    int N, Case = 0;
    while(scanf("%d",&N) == 1 && N > -1)
    {
        int Count = 0;
        N -= 1;
        while(N != 0)
        {
            N >>= 1;  // Right Shift
            Count++;
        }
        printf("Case %d: %d\n", ++Case, Count);
    }
    return 0;
}
