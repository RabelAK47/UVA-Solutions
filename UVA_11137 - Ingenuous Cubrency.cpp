#include <bits/stdc++.h>
using namespace std;
long long  ways [30030];
int Count ()
{
    int Coin [] = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
    ways [0] = 1;
    for ( int i = 0; i < 21; i++ )
    {
        for ( int j = Coin [i]; j < 30030; j++ )
        {
            ways [j] += ways [j- Coin [i]];
        }
    }
}
int main()
{
    Count();
    long long N;
    while (cin >> N)
    {
        cout << ways[N] << endl;
    }
    return 0;
}

