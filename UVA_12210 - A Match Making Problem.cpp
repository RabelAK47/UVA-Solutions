#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    int B, S, Case = 0;
    while(cin >> B >> S)
    {
        if(B == 0 && S == 0)
            break;
        vector <int> V1, V2;
        for(int i = 0; i < B; i++)
        {
            int temp; cin >> temp; V1.push_back(temp);
        }
        for(int i = 0; i < S; i++)
        {
            int temp; cin >> temp; V2.push_back(temp);
        }
        Case++;
        cout << "Case " << Case << ": ";
        (V1.size() <= V2.size()) ? cout << "0" << endl : cout << abs(V1.size()-V2.size()) << " " << *min_element(V1.begin(),V1.end()) << endl;
    }
    return 0;
}
