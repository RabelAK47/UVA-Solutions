#include "bits/stdc++.h"
using namespace std;

#define SZ(a)       (int)a.size()
#define LL          long long int

#define makeint(n,s)  istringstream(s)>>n
#define string_to_int(str) atoll(str.c_str());

#define LCM(A,B)    ((__gcd(A,B))/A)*B
#define GCD(A,B)     __gcd(A,B)


#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}

main()
{
    //write();
    Faster;
    LL T;
    cin >> T;
    while(T-- > 0)
    {
        LL R;
        cin >> R;
        vector <LL> V(R);
        for(int i = 0; i < R; i++)
            cin >> V[i];

        if(R == 0)
        {
            cout << 0 << endl;
            continue;
        }

        sort(V.begin(), V.end());
        LL Sum = 0, mid;
        if(V.size()&1)
            mid = V[V.size()/2];
        else
            mid = V[(V.size()/2)-1];

        for(int i = 0; i < R; i++)
            Sum += abs(mid-V[i]);

        cout << Sum << endl;
    }
}
