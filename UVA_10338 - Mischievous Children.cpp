#include "bits/stdc++.h"
using namespace std;

int main()
{
    unsigned long long Fact[50];
    Fact[0] = Fact[1] = 1;
    for(int i =2; i <= 20; i++)
        Fact[i] = i*Fact[i-1];

    int N;
    cin >> N;
    for(int T = 1; T <= N; T++)
    {
        string str; cin >> str;
        map <char,int> Mp;
        map <char,int> :: iterator it;

        for(int i = 0; i < str.length(); i++)
            Mp[str[i]]++;

        unsigned long long temp = Fact[str.length()];


        for(it = Mp.begin(); it != Mp.end(); ++it)
            temp /= Fact[it->second];

        cout << "Data set " << T << ": " << temp << endl;
    }
    return 0;
}
