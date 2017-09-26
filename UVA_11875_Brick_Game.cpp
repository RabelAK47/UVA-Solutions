#include <bits/stdc++.h>
using namespace std;

int N, A[50], Case = 0, temp;
int main()
{
    cin >> N;
    while(N--)
    {
        Case++;
        int K;
        cin >> K;
        for(int i = 0; i<K; i++)
        {
            cin >> A[i];
        }
        sort(A,A+K);
        if(K%2 != 0)
        {
            temp = (K-1)/2;
        }
        else
            temp = K/2;
        printf("Case %d: %d\n",Case,A[temp]);
    }
    return 0;
}
