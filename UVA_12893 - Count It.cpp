#include "bits/stdc++.h"
using namespace std;
#define LL long long int

LL Func(LL N)
{
    if(N == 0)
        return 0;
    return Func(N/2)+N%2;
}
int main()
{
    LL T;
    cin >> T;
    while(T--)
    {
        LL N; cin >> N;
        cout << Func(N) << endl;
    }
    return 0;
}
