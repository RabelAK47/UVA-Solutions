#include "bits/stdc++.h"
using namespace std;

int main()
{
    int A, B, Count = 0;
    string str;
    char Ch, Ch2;
    while(cin >> A >> Ch >> B >> Ch2 >> str)
    {
        stringstream AA(str);
        int Res;
        AA >> Res;
        if(Ch == '+')
        {
            if(Res == (A+B))
                Count++;
        }
        else if(Ch == '-')
        {
            if(Res == (A-B))
                Count++;
        }
    }
    cout << Count << endl;
    return 0;
}
