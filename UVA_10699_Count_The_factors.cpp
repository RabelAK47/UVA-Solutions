#include <bits/stdc++.h>
using namespace std;

long int N, A[100100];
void Prime_Factorization()
{
    long int i = 2, k = 0;

    for( i = 2; i*i <= N; i++)
    {
        if(N%i == 0)
        {
            while(N%i == 0)
            {
                N /= i;
                A[k] = i;
                k++;
            }
        }
    }
    if(N != 1)
    {
        A[k] =  N;
        k++;
    }
    int Count = 0;
//    sort(A,A+k);
    for (int i = 0; i < k; i++)
    {
        if(A[i]==A[i+1])
            continue;
        else
            Count++;
    }
    cout << Count << endl;
}
int main()
{
    while(cin >> N && N != 0)
    {
        if(N < 0)
        {
            N = abs(N);
        }
        cout << N << " : ";
        Prime_Factorization();
    }
    return 0;
}
