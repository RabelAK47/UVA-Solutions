#include "bits/stdc++.h"
using namespace std;
#define Maxi 30000000
int A[30000000];

void PreCal()
{
    memset(A,0,sizeof(A));

    for(int i = 1; i <= Maxi/2; i++)
    {
        for(int j = i + i; j <= Maxi; j +=i)
        {
            int B = j - i;
            int Xor = (j^B);
            if(i == Xor)
            {
                A[j]++;
            }
        }
    }
    for(int i = 2; i <= Maxi; i++)
    {
        A[i] += A[i-1];
    }
    return;
}

int main()
{
    PreCal();
    int T, Case = 0;
    scanf("%d",&T);
    while(T--)
    {
        int N; scanf("%d",&N);
        printf("Case %d: %d\n", ++Case, A[N]);
//        cout << "Case " << ++Case << ": " << A[N] << endl;
    }
    return 0;
}
