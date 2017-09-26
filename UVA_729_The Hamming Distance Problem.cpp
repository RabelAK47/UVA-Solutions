#include <bits/stdc++.h>
using namespace std;
string str;

int main()
{
    int Case = 0, T;
    cin >> T;
    while(T--)
    {
        if(Case != 0)
            cout << endl;
        Case++;
        int N, H;
        cin >> N >> H;
        int D = N-H;
        for(int i = 0; i < D ; i++)
        {
            str += "0";
        }
        for(int i = D; i < N; i++)
        {
            str += "1";
        }
        do
        {
            for(int i = 0; i < N; i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
        while(next_permutation(str.begin(),str.end()));
        str = "";
    }
    return 0;
}
