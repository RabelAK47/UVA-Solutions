#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N;
    while(scanf("%d", &N) == 1 && N)
    {
        priority_queue <int> PQ;
        for(int i = 0; i < N; i++)
        {
            int temp; scanf("%d", &temp);
            PQ.push(-temp);
        }
        int Sum = 0;
        for(int i = 0; i < N-1; i++)
        {
            int temp1 = abs(PQ.top()); PQ.pop();
            int temp2 = abs(PQ.top()); PQ.pop();

            Sum += (temp1+temp2);
            PQ.push(-(temp1+temp2));
        }
        printf("%d\n", Sum);
    }
    return 0;
}
