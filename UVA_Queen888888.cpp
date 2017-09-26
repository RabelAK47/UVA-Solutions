#include <bits/stdc++.h>
using namespace std;

int A[50],B[100], C = 0, Count, minimum= 100, ANS = 0;
priority_queue <int> PQ;

bool place(int K, int i)
{
    int j;
    for(j = 1; j < K; j++)
    {
        if(( B[j] == i) || abs(B[j]-i) == abs(j-K))
        {
            return false;
        }
    }
    return true;
}
int MagicBox(int K, int N)
{
    for(int i = 1; i <= N; i++)
    {
        if(place(K,i) == true)
        {
            B[K] = i;
            if(K == N)
            {
                Count = 0;
                for(int j = 1 ; j <= N; j++)
                {
                    if(B[j] != A[j])
                    {
                        Count++;
                    }
                }
                minimum = min(Count,minimum);
            }
            else
            {
                MagicBox(K+1, N);
            }
        }
    }
    return minimum;
}
int main()
{
    int K = 1,N = 8, Case =0;
    while(cin >> A[1])
    {
        Case++;
        for (int i = 2 ; i <= N; i++)
        {
            cin >> A[i];
        }
        cout << "Case " << Case << ": " << MagicBox(K,N) << endl;
    }
    return 0;
}

//1 2 3 4 5 6 7 8
//9 10 11 12 13 14 15 16
//17 18 19 20 21 22 23 24
//25 26 27 28 29 30 31 32
//33 34 35 36 37 38 39 40
//41 42 43 44 45 46 47 48
//49 50 51 52 53 54 55 56
//57 58 59 60 61 62 63 64
