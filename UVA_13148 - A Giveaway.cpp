#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL A[50] = {
                    1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,1000000, 1771561, 2985984, 4826809,
                    7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121
            };
    LL N;
    while(cin >> N && N)
    {
        bool flag = false;
        for(int i = 0; i < 21; i++)
        {
            if(N == A[i])
            {
                flag = true;
                break;
            }
        }
        flag == true ? cout << "Special" << endl : cout << "Ordinary" << endl;
    }
    return 0;
}
