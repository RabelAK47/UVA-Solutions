#include <bits/stdc++.h>
using namespace std;
#define M 1000000
int prime[M];
int t = 0;
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
    int N, A, B;
    while(cin >> N && N)
    {
        for(int i = 0; prime[i] <= N / 2 ; i++ )
        {
            int ans = N - prime[i];
            if(flag[ans] == 1)
            {
                cout << N << " = " << prime[i] << " + " << ans << endl;
                break;
            }
        }
    }
    return 0;
}
