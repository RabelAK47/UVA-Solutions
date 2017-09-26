#include "bits/stdc++.h"
using namespace std;

int main()
{
    long int A, B;
    while(cin >> A >> B && A != -1 && B != -1)
    {
        long int Button = abs(A-B);

        if(Button  >50)
        {
            Button = 100 - Button;
        }
        cout << Button << endl;
    }
    return 0;
}
