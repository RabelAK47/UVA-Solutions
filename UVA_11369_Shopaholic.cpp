#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, Sum = 0, sat;
        cin >> N;
        int A[N+3];
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A,A+N);
        for(int i = N - 1 , sat = 1; i >= 0; i--, sat++)
        {
            if(sat%3 == 0)
            {
                Sum+=A[i];
            }
        }
        cout << Sum << endl;
    }
    return 0;
}
