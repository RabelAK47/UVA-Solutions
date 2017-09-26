#include "bits/stdc++.h"
using namespace std;

#define oo          (1<<30)
#define SZ(a)       (int)a.size()
#define LL          long long int

main()
{
    //write();
    //Faster;
    LL N, Case = 0;
    while(cin >> N)
    {
        if(Case > 0)
            cout << endl;
        Case++;
        map <string, LL> Mp;
        vector <string> V;
        for(int i = 0; i < N; i++)
        {
            string name;
            cin >> name;
            V.push_back(name);
            Mp[name] = 0;
        }

        for(int i = 0; i < N; i++)
        {
            string name;
            LL Money, People;
            cin >> name >> Money >> People;
            if(People == 0)
                continue;

            LL gift = Money / People;
            Mp[name] -= (gift * People);
            while(People-- > 0)
            {
                string name;
                cin >> name;
                Mp[name] += gift;
            }
        }

        for(int i = 0; i < N; i++)
        {
            cout << V[i] << " " << Mp[V[i]] << endl;
        }
    }
    return 0;
}
