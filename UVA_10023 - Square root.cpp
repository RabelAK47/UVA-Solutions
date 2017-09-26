#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N;
    long long unsigned A;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> A;
        long long B = sqrt(A);
        cout << B << endl;
    }
}
