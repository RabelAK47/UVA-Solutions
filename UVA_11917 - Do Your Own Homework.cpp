#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        Case++;
        map<string,int>M;

        for(int i = 0; i < N; i++)
        {
            int temp;
            string str;
            cin >> str >> temp;
            M[str] = temp;
        }

        int check;
        cin >> check;
        string subject;
        cin >> subject;

        cout << "Case " << Case << ": ";

        if(M[subject] <= check && M[subject] != 0) cout << "Yesss" << endl;
        else if(M[subject] > check  && M[subject] <= check + 5) cout << "Late" << endl;
        else cout << "Do your own homework!" << endl;
    }
    return 0;
}
