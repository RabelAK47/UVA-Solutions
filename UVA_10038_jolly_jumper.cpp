#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, B[3010], A[3010];
    while(cin >> N && N)
    {
        int C = 1, i;
        for( i = 0; i < N; i++)
            cin >> A[i];
        for( i=0; i < N-1; i++)
            B[i] = abs(A[i]-A[i+1]);
        sort(B,B+i);
        for( i = 0; i < N-1; i++)
        {
            if(B[i] == B[i+1])
            {
                C = 0;
                break;
            }
        }
        if(C == 0)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" << endl;
    }
    return 0;
}
