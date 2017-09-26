#include <bits/stdc++.h>
using namespace std;

int A[1000];
int main()
{
    unsigned long long int N;

    while(cin >> N && N != 0)
    {
        int i = 0;
        while(N != 0)
        {
            A[i] = N%2;
            N/=2;
            i++;
        }
        int Count=0;
        cout << "The parity of ";
        for(int j = i-1; j>=0; j--)
        {
            cout << A[j];
            if(A[j] == 1)
            {
                Count++;
            }
        }
        cout << " is " << Count <<" (mod 2)." << endl;
    }
    return 0;
}
