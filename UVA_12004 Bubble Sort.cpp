#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0; cin >> T;
    while(T--)
    {
        long int N; cin >> N;
        long int Compare_Worst = N*(N-1)/2;
        cout << "Case " << ++Case << ": ";
        (Compare_Worst % 2 == 0) ? cout << Compare_Worst/2 << endl : cout << Compare_Worst << "/2" << endl;
    }
    return 0;
}
