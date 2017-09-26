#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while(cin >>N && N != 0)
    {
        long long int res = 0;
        long long int input;
        for(int i = 0; i<N; i++)
        {
            cin >> input;
            res ^= input;
        }
        if(res == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
