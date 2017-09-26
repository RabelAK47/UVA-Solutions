#include "bits/stdc++.h"
using namespace std;

vector <long int> V1, V2, V3;

void V_Clear()
{
    V1.clear();
    V2.clear();
    V3.clear();
}

void Subtract (long int N, long int K)
{
    for(int i = 0; i < N; i++)
    {
        int temp ;
        cin >> temp;
        V1.push_back(temp);
    }

    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        V2.push_back(temp);
    }

    for(int i = 0; i < N; i++)
    {
        int temp = V2[i] - V1[i];
        V3.push_back(temp);
    }
    sort(V3.begin(),V3.end());
}
int main()
{
    long int T, Case = 0;
    cin >> T;

    while(T--)
    {
        Case++;
        long int N, K;
        cin >> N >> K;

        Subtract(N, K);
        long int P = 0, Sum = 0;

        for(int i = 0; i < N; i++)
        {
            (V3[i] <= 0 && P < K) ? P++ : Sum += V3[i];
        }

        Sum <= 0 ? cout << "Case " << Case << ": No Profit" << endl : cout << "Case " << Case << ": " << Sum << endl;

        V_Clear();
    }
    return 0;
}

