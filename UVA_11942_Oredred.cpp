#include "bits/stdc++.h"
using namespace std;

#define pb push_back

int main()
{
    int T;
    cin >> T;
    cout << "Lumberjacks:" << endl;

    while(T--)
    {
        vector < int > V1, V2, V3;
        int k;
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);
        cin >> k; V1.pb(k); V2.pb(k); V3.pb(k);

        sort(V2.begin(),V2.end());
        sort(V3.rbegin(), V3.rend());

        bool flag;

        V1 == V2 ? flag = true : flag = false;

        if(flag == false)
        {
            V1 == V3 ? flag = true : flag = false;
        }
        flag == true ? cout << "Ordered" << endl : cout << "Unordered" << endl;
    }
    return 0;
}
