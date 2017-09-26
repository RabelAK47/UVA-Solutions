#include <bits/stdc++.h>
using namespace std;

int main()
{   unsigned long int A,B;
    while(cin >> A >> B)
    {
        A = A^B;
        cout << A << endl;
    }
    return 0;
}

