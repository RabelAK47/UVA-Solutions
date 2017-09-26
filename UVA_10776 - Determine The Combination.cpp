#include "bits/stdc++.h"
using namespace std;
#define LL long long int

string str;
vector <char> V;
LL taken[1000000], N;

void OUTPUT()
{
    string temp;
    for(int i = 0; i < V.size(); i++)
        temp += V[i];
    cout << temp << endl;
    return;
}
void CALL()
{
    if(V.size() == N)
    {
        OUTPUT(); return;
    }
    for(int i = 0; i < str.length(); i++)
    {
        if(V.empty() == false && V[V.size()-1] > str[i])
            continue;
        if(taken[i] == 0)
        {
            taken[i] = 1, V.push_back(str[i]);
            CALL();
            taken[i] = 0; V.pop_back();
            while(str[i] == str[i+1])
                i++;
        }
    }
}
int main()
{
    //freopen("WA.txt", "w", stdout);
    while(cin >> str >> N)
    {
        memset(taken,0,sizeof(taken));
        sort(str.begin(),str.end());
        CALL();
    }
    return 0;
}
