#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL N, Case = 0;
    while(cin >> N)
    {
        LL maxi = 0;
        vector <LL> V(N);
        for(int i = 0; i < N; i++)
            cin >> V[i];

        priority_queue <LL> PQ;
        for(int i = 0; i < N; i++)
        {
            LL temp = 1;
            for(int j = i; j < N; j++)
                temp *= V[j], PQ.push(temp);
        }
        cout << "Case #" << ++Case << ": The maximum product is " << PQ.top() << "." << endl << endl;
    }
    return 0;
}
