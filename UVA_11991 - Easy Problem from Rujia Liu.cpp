#include "bits/stdc++.h"
using namespace std;

int main()
{
    int M, N;
    while(cin >> M >> N)
    {
        vector <vector<int> > V;
        V.assign(1000000, vector<int>());
        for(int i = 0; i < M; i++)
        {
            int temp;
            cin >> temp;
            V[temp].push_back(i+1);
        }

        for(int i = 0; i < N; i++)
        {
            int K, B;
            cin >> K >> B;
            if(K - 1< V[B].size())
                cout << V[B][K-1] << endl;
            else cout << 0 << endl;
        }
    }
}
/*
8 4
1 3 2 2 4 3 2 1
1 3
2 4
3 2
4 2
*/

