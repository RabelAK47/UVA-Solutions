#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    int T;
    cin >> T;
    for(int cs = 1; cs <= T; cs++)
    {
        int N; cin >> N;
        set <int> St; set <int> :: iterator it;
        for(int i = 1; i <= sqrt(N) -1 ; i++)
        {
            int temp = N - i*i;
            if(temp%i == 0)
                St.insert(temp);
        }
        cout << "Case " << cs << ":";
        for(it = St.begin(); it != St.end(); ++it)
        {
            cout << " " << *it;
        }
        cout << endl;
    }
    return 0;
}
