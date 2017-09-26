#include "bits/stdc++.h"
using namespace std;

int main()
{
    int N, Q, Case = 0;
    while(cin >> N >> Q)
    {
        vector<int> V1, V2;
        if(N == 0 && Q == 0)
            break;
        Case++;
        for(int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            V1.push_back(temp);
        }
        sort(V1.begin(),V1.end());
        cout << "CASE# "<< Case << ":" << endl;
        for(int i = 0; i < Q; i++)
        {
            int temp;
            bool flag = true;
            cin >> temp;
            for(int j = 0; j < V1.size(); j++)
            {
                if(V1[j] == temp)
                {
                    cout << temp << " found at " << j+1 << endl;
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << temp << " not found" << endl;
            }
        }
    }
    return 0;
}
