#include "bits/stdc++.h"
using namespace std;

int main()
{
    map<string,string>M;
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N ; i++)
    {
        string str1, str2;
        getline(cin,str1);
        getline(cin,str2);
        M[str1] = str2;
    }
    int T;
    cin >> T;
    cin.ignore();
    for(int i = 0; i < T; i++)
    {
        string strF;
        getline(cin,strF);
        cout << M[strF] << endl;
    }
    return 0;
}
