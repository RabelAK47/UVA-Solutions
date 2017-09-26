#include <bits/stdc++.h>
using namespace std;

#define M 10000000 // 10^7
double A[M+1];
// Array double type
// Array double type
void Cal()
{
    A[0] = 0;
    for(int i = 1; i <= M; i++)
    {
        A[i] = A[i-1] + log(i);
    }
}
int main()
{
    Cal();
    int N, T;
    cin >> T;
    while(T--)
    {
        cin >> N;
        printf("%.0lf\n",floor(A[N]/log(10.0) + 1.0));
    }
}

