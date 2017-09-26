#include <bits/stdc++.h>
using namespace std;

#define FOR(i) for(int i = 1; i <= N; i++)
#define NL cout << endl
#define PF printf
#define SC scanf
#define TEST(T) cin >> T; while(T--)

int A[15][15],  B[30];
int ans = 0, Sum = 0;
bool QueenCheck(int Row, int Col)
{
    for(int i = 1; i < Row; i++)
    {
        if(B[i] == Col || abs(Row -i ) == abs(B[i] - Col))
        return false;
    }
    return true;
}
int NQUEEN(int Row)
{
    int i, N = 8;
    FOR(i)
    {
        if(QueenCheck(Row, i) == true)
        {
            B[Row] = i; Sum += A[Row][i];
            if(Row == 8)
            {
                ans = max(Sum, ans);
                Sum -= A[Row][i];
            }
            else NQUEEN(Row+1);
        }
    }
    return Sum -= A[Row-1] [B[Row-1]];
}
int main()
{
    int T, Case = 0;
    TEST(T)
    {
        int i, j, N = 8;
        FOR(i)
        {
            FOR(j)
            {
                cin >> A[i][j];
            }
        }
        NQUEEN(1);
        PF("%5d", ans); ans = 0;
        NL;
    }
    return 0;
}
