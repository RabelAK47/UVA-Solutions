//*
//  __________                        ___        \\ ___          __ __ _ _ .   \_
//   \ ______     \               ___|  _/      ||           \\    ||__ _ _ /      ||
//    |                _/          /    __   |         ||         //.     ||_ _ _ .         ||
//    |          |       \        /   /_/    |         ||           \\.    ||__ _ _ _     ||_ _ _ _
//    |_____|_      /    // _____   |         ||  ___  //     ||___ _  /     ||_______\
//                    \ /     \ /            \ /         \ /               \ /                                  \ /
//*/

#include <bits/stdc++.h>
using namespace std;
long long  ways [3000000];
int Count ()
{
//    int Coin [] = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
    int Coin [] = {1,5,10,25,50};
    ways [0] = 1;
    for ( int i = 0; i < 5; i++ )
    {
        for ( int j = Coin [i]; j < 3000000; j++ )
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
        if(ways[N]>1)
        {
            cout << "There are " << ways[N] <<" ways to produce " << N <<" cents change." << endl;
        }
        else
        {
            cout <<"There is only " << ways[N] << " way to produce "<< N << " cents change." << endl;
        }
    }
    return 0;
}


