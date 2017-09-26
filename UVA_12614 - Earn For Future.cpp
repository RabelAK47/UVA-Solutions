#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    //freopen("OutU.txt", "w", stdout);
    LL T, Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        LL N;
        vector < LL > V;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            LL temp; cin >> temp; V.push_back(temp);
        }
        cout << "Case " << Case << ": " << *max_element(V.begin(),V.end()) << endl;
    }
    return 0;
}
