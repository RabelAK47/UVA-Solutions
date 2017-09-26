#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    while(cin >> N >> K && K > 1)
    {
        cout << (N-1)/(K-1)  + N << endl;
    }
    return 0;
}
