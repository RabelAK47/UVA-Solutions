#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
//    freopen("WA.txt", "w", stdout);
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL R, C, M, N;
        scanf("%lld %lld %lld %lld", &R, &C, &M, &N);
        map <char, LL> Mp;
        vector <LL> V;
        for(int i = 0; i < R; i++)
        {
            string str;
            cin >> str;
            for(int j = 0; j < str.length(); j++)
                Mp[str[j]]++;
        }
        LL maxi = 0, Sum = 0;
        for(map <char, LL> :: iterator it = Mp.begin(); it != Mp.end(); it++)
        {
            V.push_back(it->second);
            if(it->second > maxi)
                maxi = it->second;
        }

        for(int i = 0; i < V.size(); i++)
        {
            if(V[i] == maxi)
                Sum += maxi;
        }
        printf("Case %lld: %lld\n", Case++, (Sum * M) + (R*C - Sum) * N);
    }
    return 0;
}
