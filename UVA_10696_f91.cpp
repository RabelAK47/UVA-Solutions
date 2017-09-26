#include <bits/stdc++.h>
using namespace std;

long int f(int N)
{
    if(N >= 101)
        return N-10;
    else
        return f(f(N+11));
}
int main()
{
    long int N;
    while(cin >> N && N)
    {
        printf("f91(%ld) = %ld\n", N, f(N));
    }
    return 0;
}
