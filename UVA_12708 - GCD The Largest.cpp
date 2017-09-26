#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, K;
    cin >> N;
    while(N--)
    {
        cin >> K;
        if(K/2==0)
            K = K+2;
        cout << K/2 << endl;
    }
}
