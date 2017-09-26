#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;
    while(cin >>A >> B >> C >> D)
    {
        if(A == 0 && B == 0 && C == 0 && D == 0)
            return 0;
        int Ans = 1080;
        if(A< B)
            Ans = Ans + (40+A-B)*9;
        else
            Ans = Ans+(A-B)*9;

        if(B > C)
            Ans = Ans + (40+C-B)*9;
        else
            Ans = Ans+(C-B)*9;

        if(C < D)
            Ans = Ans+(40+C-D)*9;
        else
            Ans = Ans + (C-D)*9;
        cout << Ans << endl;
    }
    return 0;
}
