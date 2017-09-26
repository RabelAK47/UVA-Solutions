#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N,R;
    while(cin >> N && N)
    {
        R = sqrt(N);
        if(R*R == N)
            cout << "yes" << endl;
        else
        cout << "no" << endl;
    }
    return 0;
}
int main()
{
    int N;
    while(cin >> N && N)
    {
        int C = 0, rem = 0;
        while(1)
        {
            rem = (rem*10 + 1)%N;
            C++;
            if(rem == 0)
                break;
        }
        cout << C << endl;
    }
}
