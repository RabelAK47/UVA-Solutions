#include <bits/stdc++.h>
using namespace std;
#define M 18409202//1299709//18409202 // 10^7
int prime[M];
int F[M];
long int t = 0;
bool flag[M];
void siv()
{
    int i, j, val;
    for(int i = 2; i <= M; i++)
    {
        flag[i] = 1;
    }
    for(int i = 2; i <= sqrt(M); i++)
    {
        if(flag[i])
        {
            for(j = i; j * i <= M; j++)
            {
                flag[i*j] = 0;
            }
        }
    }
    for(int i = 0; i <= M; i++)
    {
        if(flag[i])
        {
            prime[t++] = i;
        }
    }
}
int Factorization(int k)
{
    int Sum = 0;
    for(int i = 0; prime[i] * prime[i] <= k; i++)
    {
        if(flag[k])
        {
            return Sum + 1;
        }
        while(k % prime[i] == 0)
        {
            Sum++;
            k /= prime[i];
        }
    }
    if(k>1)
        Sum += 1;
    return Sum;
}
void Fibo()
{
    F[0] = F[1] = 0;
    for(int i = 2; i <= M; i++)
    {
        F[i] = F[i-1] + Factorization(i);
    }
}
int main()
{
    siv();
    Fibo();
    int N;
    while(cin >> N)
    {
        cout << F[N] << endl;
    }
    return 0;
}
