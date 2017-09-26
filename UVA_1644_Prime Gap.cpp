#include <bits/stdc++.h>
using namespace std;
#define M 18409202//1299709//18409202 // 10^7
int prime[M];
int A[M];
long int t = 0;
bool flag[M];
void siv()
{

    int i , j, val;
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
int main()
{
    siv();
    long int N;
    while(cin >> N && N)
    {
        long int Count1 = N, Count2 =N;
        for(long int i = 0; flag[Count1] == 0; i++)
        {
            Count1++;
        }
        for(long int i = 0; flag[Count2] == 0; i++)
        {
            Count2--;
        }
        cout << abs(Count1 - Count2) << endl;
    }
    return 0;
}
