#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    int T;
    while(cin >> T)
    {
        for(int test = 1; test <= T; test++)
        {
            map <string, int> Mp;
            map <string, int> :: iterator it;
            priority_queue <int> PQ;
            vector <string> V;

            for(int i = 0; i < 10; i++)
            {
                string str;
                int num;
                cin >> str >> num;
                V.push_back(str);
                Mp[str] = num;
                PQ.push(num);
            }
            int maxi = PQ.top();
            cout << "Case #" << test << ":\n";

            for(int i = 0; i < V.size(); i++)
            {
                for(it = Mp.begin(); it != Mp.end(); ++it)
                {
                    if(it->second == maxi && V[i] == it->first)
                    {
                        cout << it->first << endl;
                    }
                }
            }
        }
    }
    return 0;
}
