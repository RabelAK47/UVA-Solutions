#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL N, M;
    while(cin >> N >> M)
    {
        if(N == false && M == false) return 0;
        map<LL,LL> Mp;
        LL Sum = 0;
        for(int i = 0; i < N+M; i++)
        {
            LL temp; cin >> temp; Mp[temp]++;
            if(Mp[temp] > 1) Sum++;
        }
        cout << Sum << endl;
    }
    return 0;
}
