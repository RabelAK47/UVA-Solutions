#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

int main()
{
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        string str;
        cin >> str;
        sort(str.begin(),str.end());

        do
        cout << str << endl;
        while(next_permutation(str.begin(),str.end()));

        cout << endl;
    }
    return 0;
}
