#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string,string> M;
    string str1, str2;
    int T;
    cin >> T;
    getchar();
    while(T--)
    {
        getline(cin,str1);
        getline(cin,str2);
        M[str1] = str2;
    }
    int N;
    cin >> N;
    getchar();
    while(N--)
    {
        string strF;
        getline(cin,strF);
        cout << M[strF] << endl;
    }

    return 0;
}
