#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

int main()
{
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL N, P, Count = 0;
        scanf("%lld %lld", &N, &P);

        vector <LL> V(P+1);
        for(int i = 0; i < P; i++)
            scanf("%lld", &V[i]);

        for(int i = 1; i <= N; i++)
        {
            if(i%7 != 6 and i%7 != 0)
            {
                bool flag = false;
                for(int j = 0; j < P; j++)
                {
                    if(i%V[j] == 0)
                        flag = true;
                }
                if(flag)
                    Count++;
            }
        }
        printf("%lld\n", Count);
    }
    return 0;
}
