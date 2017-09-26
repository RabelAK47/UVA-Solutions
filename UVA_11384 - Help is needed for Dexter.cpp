#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    LL N;
    while(cin >> N)
    {
        for(int i = 0; ; i++)
        {
            if(pow(2,i) > N)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
