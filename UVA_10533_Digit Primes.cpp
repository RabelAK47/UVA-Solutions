#include <bits/stdc++.h>
using namespace std;
#define M 1000000 // 10^6
int prime[M];
int A[M], B[M];
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
int Digit_Sum(int i)
{
    int Sum = 0;
    while(i != 0)
    {
        int k = i %10;
        Sum+=k;
        i /= 10;
    }
    return Sum;
}
int main()
{
    siv();
    A[0] = 0, A[1] = 0;
    for(int i = 2; i <= M; i++)
    {
        B[i] = (flag[Digit_Sum(i)] && flag[i]);
    }
    for(int i = 2; i <= M; i++)
    {
        A[i] = A[i-1] + B[i];
    }
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, Count = 0;
        cin >> a >> b;
        if(B[a])
            a -= 1;
        cout << abs(A[a] - A[b]) << endl;
    }
//        for(int i = A-1; i <= B; i++)
//        {
//            if(flag[i])
//            {
//                if(flag[Fun(i)])
//                {
//                    Count++;
//                }
//            }
//        }
//        cout << Count << endl;
//    }
    return 0;
}
