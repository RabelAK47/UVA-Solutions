#include "bits/stdc++.h"
using namespace std;

/*
    cout << "9999 99980001" << endl;
    cout << "10000 100000000" << endl;
    cout << "10001 100020001" << endl;
    cout << "10002 100040004" << endl;
    cout << "10003 100060009" << endl;
    cout << "10004 100080016" << endl;
    cout << "10005 100100025" << endl;
*/

#define LL long long int

main()
{
    vector <LL> V;
    for(int i = 11000; i >= 1; i--)
    {
        LL temp1 = i*i, Sum = 0;
        while(temp1)
            Sum += temp1%10, temp1 /= 10;

        if(sqrt(Sum) == Sum/(sqrt(Sum)))
        {
            V.push_back(i*i);
            if(V.size() == 7)
            {
                for(int j = 6; j >= 0; j--)
                    printf("%d %lld\n", i++, V[j]);
                break;
            }
        }

        else if(!V.empty())
            V.clear();
    }
    return 0;
}
