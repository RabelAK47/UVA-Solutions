#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int H, M;
        char C;
        cin >> H >> C >> M;

        H = 11 - H;
        if(M == 0)
            H += 1;

        if(M != 0)
            M = 60 - M;
        if(H <= 0)
            H += 12;

        printf("%02d%c%02d\n", H, C, M);
    }
}
