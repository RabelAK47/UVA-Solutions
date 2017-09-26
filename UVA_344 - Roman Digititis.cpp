#include "bits/stdc++.h"
using namespace std;

#define LL          long long
#define ULL         unsigned long long
#define ISS         istringstream
#define OSS         ostringstream

main()
{
    //write();
    LL N, Case = 1;
    while(cin >> N && N)
    {
        map <char, LL> Mp;
        Mp['i'] = 1;

        for(int i = 2; i <= N; i++)
        {
            if(i%10 == 1 or i%10 == 4 or i%10 == 6 or i%10 == 9)
                Mp['i'] += 1;
            if(i%10 == 2 or i%10 == 7)
                Mp['i'] += 2;
            if(i%10 == 3 or i%10 == 8)
                Mp['i'] += 3;
            if(i%10 == 4 or i%10 == 5 or i%10 == 6 or i%10 == 7 or i%10 == 8)
                Mp['v'] += 1;
            if((i>=9 && i<19) or (i >= 40 and i < 49) or (i >= 59 and i < 69) or (i >= 90 and i < 99))
                Mp['x'] += 1;
            if((i >= 19 and i < 29) or i == 49 || (i >= 69 and i < 79) or i == 99)
                Mp['x'] += 2;
            if((i >= 29 and i < 39) or (i >= 79 and i < 89))
                Mp['x'] += 3;
            if(i == 39 || i == 89)
                Mp['x'] += 4;
            if(i >= 40 and i < 90)
                Mp['l'] += 1;
            if(i >= 90)
                Mp['c'] += 1;

        }
        printf("%lld: %lld i, %lld v, %lld x, %lld l, %lld c\n",N, Mp['i'], Mp['v'], Mp['x'], Mp['l'], Mp['c']);
    }
    return 0;
}
