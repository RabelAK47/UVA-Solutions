#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("OUTPUT.txt", "w", stdout);
    long int T, Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        vector <pair <long , long> > V;
        long N;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            long A, B;
            cin >> A >> B;
            V.push_back(make_pair(B,A));
        }

        sort(V.rbegin(),V.rend());

        long Sum = 0, res = 0;
        for(int i = 0; i < N; i++)
        {
            Sum += V[i].second;
            res = max(res, Sum * V[i].first);
        }

        cout << "Case " << Case << ": " << res << endl;
    }
    return 0;
}
