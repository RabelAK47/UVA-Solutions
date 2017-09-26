#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        cin >> K;
        getchar();
        if(K== 2 || K == 3 || K == 5 || K == 7 || K == 13 || K == 17 || K == 19 || K == 31)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
