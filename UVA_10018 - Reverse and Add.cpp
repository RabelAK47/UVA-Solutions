#include <bits/stdc++.h>
using namespace std;

long long int rev (long long int N)
{
    long long int reve = 0;
    while(N > 0)
    {
        reve = (reve*10) + (N%10);
        N = N/10;
    }
    return reve;
}

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int A, B, Count = 0;
        cin >> A;
        B = rev(A);
        while(A != B)
        {
            A = A + B;
            B = rev(A);
            Count++;
        }
        cout << Count << " " << A << endl;
    }
    return 0;
}
