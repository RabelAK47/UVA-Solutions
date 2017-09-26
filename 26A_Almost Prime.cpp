

//          **************************************
//          *           Rabel(AK47)              *
//          *                                    *
//          **************************************

#include "bits/stdc++.h"
using namespace std;

bool isprime(int n)
{
    if(n <= 1)
        return false;

    int lim = sqrt(n);

    for(int i = 2; i <= lim; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

void AlmostPrime(int N)
{
    int Ans = 0;

    for(int k = 4; k <= N; k++)
    {
        int lim = k/2;
        int Count = 0;

        for(int i = 2; i <= lim; i++)
        {
            if( (k % i == 0) && (k / i != i) && isprime(i) )
            {
                Count++;
            }
        }

        if(Count == 2)
        {
            Ans++;
        }
    }

    cout << Ans << endl;
}

int main()
{
    int N;

    while(cin >> N)
    {
        AlmostPrime(N);
    }

    return 0;
}
