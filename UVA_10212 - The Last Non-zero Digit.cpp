#include "bits/stdc++.h"
using namespace std;

int main()
{
    long int N, R, MOD = 1000000000;
    while(cin >> N >> R)
    {
        long int Ans = 1;
//        for(int i = 1; i <= R; i++)
//        {
//            Ans *= (N-R) + i;
//            while(Ans % 10 == 0)
//            {
//                Ans /= 10;
//            }
//            Ans %= MOD;
//        }
        for(int i = N; i >= (N-R+1); i--)
        {
            Ans *= i;
            while(Ans % 10 == 0)
            {
                Ans /= 10;
            }
            Ans %= MOD;
        }
        cout << Ans % 10 << endl;
    }
    return 0;
}
