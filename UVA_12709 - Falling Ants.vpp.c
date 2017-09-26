#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL T;
    while(cin >> T && T)
    {
        LL MaxH = 0, Vol = 1;
        for(int i = 0; i < T; i++)
        {
            LL L, W, H; cin >> L >> W >> H;
            if(MaxH <= H)
            {
                if(MaxH == H)
                {
                    Vol = max(Vol,( L* W * H));
                }
                else
                {
                    Vol = L * W * H;
                    MaxH = H;
                }
                MaxH = H;
            }
        }
        cout << Vol << endl;
    }

    return 0;
}

