#include <bits/stdc++.h>
using namespace std;

int sq[1000];

void DP_SQ()
{
    sq[0] = 0, sq[1] = 1;
    for(int i = 2; i <= 105; i++)
    {
        sq[i] = sq[i-1] + i*i;
    }
    return ;
}

int main()
{
    DP_SQ();
    int N;
    while(cin >> N && N)
    {
        cout << sq[N] << endl;
    }
    return 0;
}
