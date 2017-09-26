#include <bits/stdc++.h>
using namespace std;

long int Magic(long long int N)
{
    long long int i, maxi = 0, Count = 0;
    for( i = 2; i * i <= N; i++)
    {
        if(N % i == 0)
        {
            Count++;
            while(N% i == 0)
            {
                N /= i;
            }
        }
        maxi = max(maxi,i);
    }
    if(N>1)
        Count++;
    maxi = max(maxi,N);
    if(Count <= 1)
        return -1;
    return maxi;
}
int main()
{
    long long int N;
    while(cin  >> N && N)
    {
        if(N < 0)
        {
            N = abs(N);
        }
        cout << Magic(N) << endl;
    }
    return 0;
}
