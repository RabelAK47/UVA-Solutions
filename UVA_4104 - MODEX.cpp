#include <bits/stdc++.h>
using namespace std;
#define LLU long long unsigned

LLU bigmod (LLU X, LLU Y, LLU N)
{
    LLU ret = 1;
    while(Y)
    {
        if(Y && 1)
        {
            ret = (ret * X) % N;
        }
        X = (X*X)%N;
        Y >>=1;
    }
    return ret;
//    if(X== 0)
//        return 0;
//    else if(X == 1 || Y == 0)
//        return 1;
//    if(Y && 1)
//        return ( X%Z) *bigmod(X, Y-1, Z) % Z;
//    else
//    {
//        LLU ret = bigmod(X, Y/2, Z) % Z;
//        return ret*ret%Z;
//    }
}

int main()
{
    LLU T, X, Y, N;
    while(cin >> T && T!=0)
    {
        while(T--)
        {
            cin >> X >> Y >> N;
            cout << bigmod(X,Y,N) << endl;
        }
    }
    return 0;
}
