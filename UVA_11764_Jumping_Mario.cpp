#include "bits/stdc++.h"
using namespace std;

int main()
{

    int T, A[500], Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        int N;
        cin >> N;
        int high = 0, low = 0;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for(int j = 0; j < N-1; j++)
        {
            if(A[j] > A[j+1])
            {
                low++;
            }
            else if(A[j] < A[j+1])
            {
                high++;
            }
        }
        cout << "Case " << Case << ": " << high << " " << low << endl;
    }
    return 0;
}
