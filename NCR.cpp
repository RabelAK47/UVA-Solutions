#include <bits/stdc++.h>
using namespace std;

int main()
{

    int P, Q, R, S;
    while(cin >> P >> Q >> R >> S)
    {
        if(P - Q < Q)
        {
            Q = P - Q;
        }
        if(R - S < S)
        {
            S = R - S;
        }

        double Ans = 1.0;

        for(int i = 1; i <= Q || i <= S; i++)
        {
            if(i <= Q)Ans = Ans*(P - Q + i)/i;
            if(i <= S)Ans = Ans*i/(R - S + i);
        }
        printf("%0.5lf\n",Ans);
    }
    return 0;
}
