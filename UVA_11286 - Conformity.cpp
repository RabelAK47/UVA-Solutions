#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N;
    while(scanf("%d", &N) == 1 && N)
    {
        map <vector<int>, int> Mp;
        map <vector<int>, int> :: iterator it;
        priority_queue <int> PQ;

        for(int i = 0; i < N; i++)
        {
            vector <int> V(5);
            for(int j = 0; j < 5; j++)
            {
                scanf("%d", &V[j]);
            }
            sort(V.begin(),V.end());
            Mp[V]++; PQ.push(Mp[V]);
        }
        int Sum = 0;
        for(it = Mp.begin(); it != Mp.end(); ++it)
        {
            if(PQ.top() == it->second)
                Sum += it->second;
        }
        printf("%d\n", Sum);
    }
    return 0;
}
