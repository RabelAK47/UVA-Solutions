#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        char Ch1, Ch2, Ch3, temp;
        int A;
        cin >> Ch1 >> Ch2 >> Ch3 >> temp >> A;
        int convert = 26*26*(Ch1 - 'A') + 26*(Ch2-'A') + (Ch3 - 'A');
        (abs(convert-A) <= 100) ? cout << "nice" << endl : cout << "not nice" << endl;
    }
    return 0;
}
