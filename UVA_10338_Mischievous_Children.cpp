#include "bits/stdc++.h"
using namespace std;
vector <long long int> V;

void Factorial()
{
    V.push_back(1);
    for(int i = 1; i <= 20; i++)
    {
        V.push_back(V[i-1]*i);
    }
}
int main()
{
    Factorial();
    int N, Case = 0;
    cin >> N;
    while(N--)
    {
        string str;
        cin >> str;
        cout << "Data set " << ++Case <<": " << V[str.length()]/2 << endl;
    }
}
