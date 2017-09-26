#include "bits/stdc++.h"
using namespace  std;
vector <long int> Vec;

int main()
{
    long int T, Case = 0;
    cin >> T;

    while(T--)
    {
        Case++;
        long int N;
        cin >> N;
        cout << "Case #" << Case << ": " << N << " = ";

        int Count = 0;
        for(long int i = 2; i <= sqrt(N); i++)
        {
            if(N % i == 0)
            {
                Vec.push_back(i);
                Vec.push_back(N/i);
                Count++;
            }
            if(Count == 2)
                break;
        }

        cout << Vec[0] << " * " << Vec[1]  << " = " << Vec[2] << " * " << Vec[3] << endl;
        Vec.clear();
    }

    return 0;
}
