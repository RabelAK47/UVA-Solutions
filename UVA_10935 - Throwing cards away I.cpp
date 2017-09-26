#include "bits/stdc++.h"
#include "queue"
using namespace std;

int main()
{
    int N;
    while(cin >> N && N)
    {
        queue <int> Q;
        for(int i = 1; i <= N; i++)
            Q.push(i);

        cout << "Discarded cards:";
        while(Q.size() > 1)
        {
            cout << " " << Q.front(), Q.pop();
            int temp = Q.front(); Q.pop();
            Q.push(temp);
            if(Q.size() > 1) cout << ",";
        }
        cout << endl << "Remaining card: " << Q.front() << endl;
    }
    return 0;
}
