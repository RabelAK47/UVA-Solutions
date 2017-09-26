#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, Case = 0;
    cin>>T;
    while(T--)
    {
        Case++;
        int C, F;
        cin>>C>>F;
        double  Cel;
        Cel = ((5.0/9.0)*F)+C;
       cout<<"Case " << Case <<": " << fixed << setprecision(2) << Cel << endl;
    }
    return 0;
}
