#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str;

    while(cin >> str)
    {
        string S1 = "", S2 = "", S3 = "", S4 = "";

        S1 += str[0];
        S1 += str[1];

        S2 += str[2];
        S2 += str[3];

        S3 += str[4];
        S3 += str[5];

        S4 += str[6];
        S4 += str[7];
        stringstream First(S1), Second(S2), Third(S3), Fourth(S4);

        int H, M, S, C;
        First >> H;
        Second >> M;
        Third >> S;
        Fourth >> C;

        cout << H << M << S << C << endl;
    }
}
