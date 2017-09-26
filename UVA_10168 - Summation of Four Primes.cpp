#include "bits/stdc++.h"
using namespace std;

#define M 10000000
int prime[M];
int t = 0;
bool flag[M];

void siv()
{
    int i, j, val;
    for(int i = 2; i <= M; i++)
    {
        flag[i] = 1;
    }
    for(int i = 2; i <= sqrt(M); i++)
    {
        if(flag[i])
        {
            for(j = i; j * i <= M; j++)
            {
                flag[i*j] = 0;
            }
        }
    }
    for(int i = 0; i <= M; i++)
    {
        if(flag[i])
        {
            prime[t++] = i;
        }
    }
}

int main()
{
    siv();
    int N;
    while(cin >> N)
    {
        if(N < 8)
        {
            cout << "Impossible." << endl;
            continue;
        }
        vector <int> V;
        V.push_back(2);
        int Total = N - 2;

        if(N % 2 == 0)
        {
            V.push_back(2);
            Total -= 2;
        }
        else
        {
            Total -= 3;
            V.push_back(3);
        }
        for(int i = 2; i < Total; i++)
        {
            if(flag[i] && flag[Total - i])
            {
                V.push_back(i);
                V.push_back(Total - i);
                break;
            }
        }

        for(int i = 0; i < V.size(); i++)
        {
            cout << V[i];
            if(i != V.size()-1)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
