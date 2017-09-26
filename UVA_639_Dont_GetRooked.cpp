#include <bits/stdc++.h>
using namespace std;
char A[5][5];
int Checking(int c, int d, int N)
{
    for(int i = d+1; A[c][i] != 'X' && i < N; )         if(A[c][i++] == 'x') return 0;
    for(int i = d-1; A[c][i] != 'X' && i >= 0; )        if(A[c][i--] == 'x') return 0;
    for(int i = c+1; A[i][d] != 'X' && i < N; )         if(A[i++][d] == 'x') return 0;
    for(int i = c-1; A[i][d] != 'X' && i >= 0; )        if(A[i--][d] == 'x') return 0;

    return 1;
}
int MagicBox(int N)
{
    int Maximum = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(A[i][j] == 'x')
                continue;
            else if (A[i][j] == 'X')
                continue;
            if(Checking(i, j, N) == 1)
            {
                A[i][j] = 'x';
                Maximum = max(Maximum, 1+MagicBox(N));
                A[i][j] = '.';
            }
        }
    }
    return Maximum;
}
int main()
{
    for(int N; cin >> N && N;)
    {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> A[i][j];
            }
        }
        cout << MagicBox(N) << endl;
    }
    return 0;
}
