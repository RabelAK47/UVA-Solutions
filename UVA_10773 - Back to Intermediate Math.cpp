#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, Case = 0;
    cin>>T;
    while(T--)
    {
        double D, V, U;
        Case++;
        cin>>D>>V>>U;
        if(V ==0 || U==0 || V >= U)
        {
            cout << "Case " << Case << ": " << "can't determine" << endl;
            continue;
        }
        else
        {
            double T1, T2, Time, sq;
            T1 = D/U;
            sq = sqrt(U*U - V*V);
            T2 = D/sq;
            Time = abs(T1-T2);
            printf("Case %d: %.3lf\n",Case,Time);
        }
    }
    return 0;
}
