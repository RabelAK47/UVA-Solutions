
                            //1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440, 9694845, 35357670, 129644790,

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int Catalan_Num[15] = {1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786};
    int N, Count = 0;
    while(cin >> N && N)
    {
        if(Count >= 1)cout << endl;
        cout << Catalan_Num[N] << endl;
        Count++;
    }
}
