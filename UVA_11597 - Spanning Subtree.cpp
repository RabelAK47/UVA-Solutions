#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Case =0;
    while(cin>>N)
    {
        Case++;
        if(N < 2 || N>400)
        break;
        cout << "Case " << Case <<": " << N/2 << endl;

    }
}
