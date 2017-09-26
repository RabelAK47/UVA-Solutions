#include<bits/stdc++.h>
using namespace std;


int Total, LenA_Box;
int TempA_Box[25], A_Box[25],A[25];
vector <int> Vec;

void MagicBox(int Index, int Sum, int Count, int CD, int N)
{
    //    if((Index == N) && (Sum <=CD) && (Sum > Total))
//    {
    if(Index == N)
    {
        if(Sum <= CD)
        {
            if(Sum > Total)
            {
                Total = Sum;
                LenA_Box = Count;
                for(int i = 0; i < Count; i++)
                {
                    A_Box[i] = TempA_Box[i];
                }
            }
        }
        return;
    }
    else
    {
        MagicBox(Index+1, Sum, Count, CD, N);
        TempA_Box[Count] = A[Index];
        MagicBox(Index+1, Sum+A[Index], Count+1, CD, N);
        return;
    }
    return;
}

int main()
{
    for( int CD, N; cin >> CD >> N && CD && N;  )
    {
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        LenA_Box = 0;
        Total = 0;
        MagicBox(0,0,0, CD,N);
        for(int i = 0; i < LenA_Box; i++)
        {
            cout << A_Box[i] << " ";
        }
        cout << "sum:" << Total << endl;
    }
    return 0;
}
