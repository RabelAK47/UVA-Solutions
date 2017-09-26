#include "bits/stdc++.h"
using namespace  std;

int main()
{
    long int T;
    cin >> T;
    while(T--)
    {
        long int N, Sum;
        cin >> N;
        Sum = sqrt(1 + 8 * N);
        Sum -= 1;
        Sum /= 2;
        cout << Sum << endl;
    }
}
//n = (-1+sqrt(1+8s))/2
