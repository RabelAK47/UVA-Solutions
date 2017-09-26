#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Case = 0, N, T, A[1000];
    cin >> T;
    while(T--)
    {
        Case++;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A,A+N);
        cout << "Case " << Case << ": " << A[N-1] << endl;
    }
    return 0;
}
