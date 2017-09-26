#include "bits/stdc++.h"
using namespace std;

int main()
{
   // freopen("WA.txt", "w", stdout);
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        double N, Sum = 0.0;
        for(int i = 0; i < 12; i++)
        {
            cin >> N;
            Sum += N;
        }
        Sum /= 12.0;
        (Sum > 999.99) ? printf("%d $%ld,%.2lf\n",++Case,(int)(Sum/1000.0),fmod(Sum,1000.0)) : printf("%d $%.2lf\n", ++Case, Sum);
    }
    return 0;
}
