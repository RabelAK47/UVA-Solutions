#include "bits/stdc++.h"
using namespace std;

int main()
{
    int S, Case = 0;;
    while(cin >> S)
    {
        if(S < 0)
            break;
        vector <int> V1, V2;

        V1.push_back(S); //S
        for (int i = 0; i < 12; i++)
        {
            int temp; cin >> temp; V1.push_back(temp);
        }
        for(int i = 0; i < 12; i++)
        {
            int temp; cin >> temp; V2.push_back(temp);
        }

        cout << "Case " << ++Case << ":" << endl;
        int temp = V1[0];
        for(int i = 0; i < 12; i++)
        {
            if(temp >= V2[i])
            {
                cout << "No problem! :D" << endl;
                temp -= V2[i];
            }
            else
                cout << "No problem. :(" << endl;
            temp += V1[i+1];
        }
    }
    return 0;
}
