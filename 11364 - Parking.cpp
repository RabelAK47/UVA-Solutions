#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        int Max, Min;
        vector <int>V;
        cin>>N;
        for(int i=1; i<=N; i++)
        {
            int K;
            cin>>K;
            V.push_back(K);
        }
        sort(V.begin(),V.end());
        Min = V[0];
        Max = V[N-1];
        cout << 2*(Max-Min) << endl;
    }
    return 0;
}

