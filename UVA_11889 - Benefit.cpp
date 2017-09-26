#include <bits/stdc++.h>
using namespace std;

int G(int A, int B)
{
    if(A < B)
    {
        A = A+B;
        B = A-B;
        A = A-B;
    }
    if(A%B == 0)
        return B;
    return G(B,A%B);
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long int A, C;
        cin >> A >> C;
        if(C % A)
        {
            cout << "NO SOLUTION" << endl;
            continue;
        }
        long int B = C / A;
        long int g = G(A,B);
        long int K = 1;
        while(g > 1)
        {
            K * g;
            A /= g;
            g = G(A,B);
        }
        cout << B * K<< endl;
    }
    return 0;
}
