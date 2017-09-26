#include <bits/stdc++.h>
using namespace std;
#define M 32800

int prime[M];
bool flag[M];
int t = 0;

void siv()
{
    for(int i = 2; i <= M; i++)
    {
        flag[i] = 1;
    }
    for(int i = 2; i <= sqrt(M); i++)
    {
        if(flag[i])
        {
            for(int j = i; j * i <= M; j++)
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
    int N;
    while(cin >> N && N)
    {
        int Count = 0;
        for(int i = 0; prime[i] <= N / 2; i++)
        {
            int ans = N - prime[i];
            if(flag[ans])
            {
                Count++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}
