#include <bits/stdc++.h>
using namespace std;
int F[100000];
int N, K, Count =0;
int Fibo(int N, int K)
{
    F[0] = 0;
    F[1] = 1;
    for(int i=N; i<=K; i++)
    {
        F[i] = F[i-1] + F[i-2];
        Count++;
    }
    return Count;
}
int main()
{
    while(cin>>N>>K)
    {
        int Ans = Fibo(N,K);
        cout << Ans << endl;
    }
}
