#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N, A;
        cin >>N;
        A = (N*567)/9;
        A += 7492;
        A *= 235;
        A /= 47;
        A -= 498;
        A = abs(A);
        cout << (A/10)%10 << endl;
    }
    return 0;
}
