#include <bits/stdc++.h>
using namespace std;
int A[100];
int P, Q, ans = 1;

bool place(int k, int i)
{
    for(int j = 1; j < k; j++)
    {
        if((A[j] == i) || abs(A[j] -i) == abs(j-k))
            return false;
    }
    return true;
}
void NQUEEN (int k , int N)
{
    for(int i = 1; i<=N; i++)
    {
        if(place(k,i))
        {
            A[k] = i;
            if(k == N && A[Q] == P)
            {
                printf("%2d      ",ans++);
                for(int i = 1; i<N; i++)
                {
                    cout << A[i] << " ";
                }
                cout << A[N] << endl;
            }
            else NQUEEN(k+1,N);
        }
    }
}
int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        if(Case!=0)
            cout << endl;
        Case++;
        int N = 8;
        cin >> P >> Q;
        cout << "SOLN       COLUMN" << endl;
        cout << " #      1 2 3 4 5 6 7 8" << endl << endl;
        ans = 1;
        NQUEEN(1,N);
    }
    return 0;
}
