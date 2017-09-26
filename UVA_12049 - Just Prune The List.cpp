#include "bits/stdc++.h"
using namespace std;

int main ()
{
    //freopen("WA.txt", "w", stdout);
    int T; cin >> T;
    while(T--)
    {
        int N, M; cin >> N >> M;
        vector <int> V1, V2; vector <int> :: iterator it;
        for(int i = 0; i < N; i++)
        {
            int temp; cin >> temp; V1.push_back(temp);
        }
        for(int i = 0; i < M; i++)
        {
            int temp; cin >> temp; V2.push_back(temp);
        }
        sort(V1.begin(),V1.end()), sort(V2.begin(),V2.end());
        vector <int> v(1000000);

        it = set_intersection(V1.begin(), V1.end(), V2.begin(),V2.end(), v.begin());
        v.resize(it-v.begin());

        cout << (N+M) - v.size()*2 << endl;
    }
    return 0;
}
