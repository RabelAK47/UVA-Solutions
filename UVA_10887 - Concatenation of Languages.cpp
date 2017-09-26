#include "bits/stdc++.h"
using namespace std;

#define LL          long long int

main()
{
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N, M;
        scanf("%lld%lld", &N, &M);
        cin.ignore();
        vector <string> Vn, Vm;

        for(int i = 0; i < N; i++)
        {
            string s;
            getline(cin, s);
            Vn.push_back(s);
        }

        for(int i = 0; i < M; i++)
        {
            string s;
            getline(cin, s);
            Vm.push_back(s);
        }

        LL Count = 0;
        map <string, bool> Mp;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                string temp = Vn[i] + Vm[j];
                if(Mp[temp] == false)
                    Count++;
                Mp[temp] = true;
            }
        }
        printf("Case %lld: %lld\n", Case++, Count);
    }
    return 0;
}
