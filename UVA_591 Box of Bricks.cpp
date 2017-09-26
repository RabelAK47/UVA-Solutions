#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    int N, Case = 0;
    while(cin >> N)
    {
        if(N == 0)
            break;
        Case++;
        vector <int> V;
        int Sum = 0;
        for(int i = 0; i < N; i++)
        {
            int temp; cin >> temp; V.push_back(temp); Sum += temp;
        }
        int Average = Sum/N;
        int Count = 0;
        for(int i = 0; i < N; i++)
        {
            if(V[i] > Average)
            {
                Count += V[i]- Average;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", Case, Count);
    }
    return 0;
}
