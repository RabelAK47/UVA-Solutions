#include "bits/stdc++.h"
using namespace std;
int Sum, N, A[1000], flag;
map<vector<int>,bool>mp;
vector <int>v;

void MagicBox(int ind, int temp)
{
    if(ind == N || Sum == temp)
    {
        if(Sum != temp) return;
        if(mp[v] == false)
        {
            flag = true;
            cout << v[0];
            for(int i = 1; i < v.size(); i++)
            {
                cout << "+" << v[i];
            }
            cout << endl;
            mp[v] = true;
        }return;
    }
    else
    {
        v.push_back(A[ind]);
        MagicBox(ind + 1, temp + A[ind]);
        v.pop_back();
        MagicBox(ind+1, temp);
    }return;
}
int main()
{
    while(cin >> Sum >> N && Sum && N)
    {
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        cout << "Sums of " << Sum << ":" << endl;
        flag = false;
        MagicBox(0,0);
        if(flag == 0)
            cout << "NONE" << endl;
    }
    return 0;
}
