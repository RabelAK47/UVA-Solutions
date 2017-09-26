#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long int N, M;
        scanf("%ld %ld",&N, &M);
        vector <long int> V;
        for(long int i = 0; i < N; i++)
        {
            long int temp;
            scanf("%ld",&temp);
            V.push_back(temp);
        }
        sort(V.begin(),V.end());
        long int Count = 0;

        for(long int i = 0; i < N && V[i] <= M; i++)
        {
            M -= V[i];
            Count++;
        }
        printf("%ld\n", Count);
    }
    return 0;
}
