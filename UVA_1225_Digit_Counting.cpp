#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        map <char, LL> Mp;
        LL N;
        scanf("%lld", &N);
        for(int i = 1; i <= N; i++)
        {
            ostringstream con;
            con << i;
            string str = con.str();
            for(int j = 0; j < str.length(); j++)
                Mp[str[j]]++;
        }
        printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n", Mp['0'], Mp['1'], Mp['2'], Mp['3'], Mp['4'], Mp['5'], Mp['6'], Mp['7'], Mp['8'], Mp['9']);
    }
    return 0;
}
