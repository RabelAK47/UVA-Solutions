#include "bits/stdc++.h"
using namespace std;

int main()
{
    long int T, Case= 0;
    cin >> T;
    while(T--)
    {
        Case++;
        long int A, B, C;
        cin >> A >> B >> C;
        long int result = B + C;
        while(result > A)
        {
            result -= A;
        }
        cout << "Case " << Case << ": " << result << endl;
    }
    return 0;
}

