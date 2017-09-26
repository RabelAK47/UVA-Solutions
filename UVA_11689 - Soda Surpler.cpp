#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;

        int Count = 0, Total = A + B;
        while(Total >= C)
        {
            Total = (Total - C) + 1;
            Count++;
        }

        cout << Count << endl;
    }
    return 0;
}
