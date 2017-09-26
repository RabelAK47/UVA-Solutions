#include <bits/stdc++.h>
using namespace std;
#define M 20000000//18409202 // 10^7
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
void PreCal()
{
    int j = 1;
    for(int i = 0; i < t; i++)
    {
        if((prime[i+1] - prime[i]) == 2)
        {
            A[j++] = prime[i];
            A[j++] = prime[i+1];
        }
    }
}
int main()
{
    siv();
    PreCal();
    int N;
    while(cin >> N)
    {
        printf("(%d, %d)\n",A[N*2-1], A[N*2]);
//        cout << A[N+N-1] << " " << A[N+N] << endl;
    }
    return 0;
}
