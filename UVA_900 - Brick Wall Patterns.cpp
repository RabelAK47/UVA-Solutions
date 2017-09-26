#include <bits/stdc++.h>
using namespace std;
int F[100];
void Fibo()
{
    F[0] = 0;
    F[1] = 1;
    for(int i=2; i<100; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
}
int main()
{
    Fibo();
    int N;
    while(cin >> N && N != 0)
    {
        cout << F[N+1] << endl;
    }
    return 0;
}
