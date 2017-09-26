#include "bits/stdc++.h"
using namespace std;

#define LL long long int

main()
{
    string N, K;
    while(cin >> N)
    {
        sort(N.begin(), N.end());
        K = N;
        reverse(N.begin(), N.end());

        if(K[0] == '0')
        {
            for(int i = 1; i < K.length(); i++)
            {
                if(K[i] != '0')
                {
                    swap(K[0],K[i]);
                    break;
                }
            }
        }

        LL B = atoll(N.c_str());
        LL C = atoll(K.c_str());
        if(B < C)
            swap(B,C);

        printf("%lld - %lld = %lld = 9 * %lld\n",B,C,B-C,(LL) (B-C)/9);
    }
    return 0;
}
