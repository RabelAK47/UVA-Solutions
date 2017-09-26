#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL T;
    while(cin >> T)
    {
        for(int test = 1; test <= T; test++)
        {
            vector <LL> V;
            for(int i = 0; ; i++)
            {
                LL temp;
                cin >> temp;
                if(temp == 0)
                    break;
                else
                    V.push_back(temp);
            }
            sort(V.rbegin(),V.rend());
            LL Sum = 0;
            for(int i = 0; i < V.size(); i++)
            {
                Sum += (2*pow(V[i],i+1));
            }
            Sum > 5000000 ? cout << "Too expensive" << endl : cout << Sum << endl;
        }
    }
    return 0;
}
