#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int  N, F, K, Sum, Case=1;
    while(cin>>N>>F)
    {
        Sum = 0;
        if(N==0 && F==0)
        {
            break;
        }
        while(N--)
        {
            cin>>K;
            Sum = Sum + K;
        }
        cout << "Bill #" <<Case++ <<" costs "<<Sum <<": " << "each friend should pay " <<Sum /F <<endl;
    }
    return 0;
}
