#include "bits/stdc++.h"
using namespace  std;

int main()
{
    long int A, B, C, D, L;
    while(cin >> A >> B >> C >> D >> L)
    {
        if(A == 0 && B == 0 && C == 0 && D == 0 && L == 0)
            return 0;

        int Count = 0;
        for(int x = 0; x <= L; x++)
        {
            long int Ans = A * (x * x) + B * x + C;
            if(Ans % D == 0)
            {
                Count++;
            }
        }

        cout << Count << endl;
    }
    return 0;
}

