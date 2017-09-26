#include "bits/stdc++.h"
using namespace std;

int Algo_LCS(vector <int>V1, vector <int> V2)
{
    int L[V1.size()+5][V2.size()+5];
    for(int i = 0; i <= V1.size(); i++)
    {
        for(int j = 0; j <= V2.size(); j++)
        {
            if(i == 0 || j == 0)
                L[i][j] = 0;
            else if(V1[i-1] == V2[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[V1.size()][V2.size()];
}
int main()
{
    int N, M, tile = 0;
    while(cin >> N >> M && !(M == 0 && N == 0))
    {
        vector <int> V1, V2;
        for(int i = 0; i < N; i++)
        {
            int temp; cin >> temp;
            V1.push_back(temp);
        }
        for(int i = 0; i < M; i++)
        {
            int temp; cin >> temp;
            V2.push_back(temp);
        }
        if(N < M)
            swap(V1,V2);
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", ++tile, Algo_LCS(V1,V2));
    }
    return 0;
}
