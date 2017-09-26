#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A[1000], mini, dis;
    cin >> N;
    while(N--)
    {
        int K;
        cin >> K;
        for(int i = 0; i < K; i++)
        {
            cin >> A[i];
        }
        sort(A,A+K);
        for(int i = 0; i < K; i++)
        {
            dis = 0;
            for(int j = 0; j < K; j++)
            {
                dis += abs(A[i]-A[j]);
            }
            if(i==1)
            {
                mini = dis;
            }
            if(dis < mini)
            {
                mini = dis;
            }
        }
        cout << mini << endl;
    }
}
