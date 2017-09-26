#include <bits/stdc++.h>
using namespace std;

int A[5], flag ;
void MagicBox(int M, int N)
{
    if(M == 5)
    {
        if(N == 23)
            flag = 1;
            return;
    }
    else
    {
        MagicBox(M+1, N+A[M]);
        MagicBox(M+1, N-A[M]);
        MagicBox(M+1, N*A[M]);
        return;
    }
}
int main()
{
    while(cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4] && A[0] && A[1] && A[2] && A[3] && A[4])
    {
        flag = 0;
        sort(A,A+5); flag = 0;
        do
        {
            MagicBox(1, A[0]);
            if(flag == 1)
                break;
        }
        while(next_permutation(A,A+5));
        if(flag == 1) cout << "Possible" << endl;
        else if(flag == 0) cout << "Impossible" << endl;
    }
    return 0;
}

