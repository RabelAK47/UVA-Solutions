#include "bits/stdc++.h"
using namespace std;

int main()
{
    int M, N;
    while(cin >> M >> N)
    {
        map <string,int> MM;
        for(int i = 0; i < M; i++)
        {
            string str;
            cin >> str;
            int temp;
            cin >> temp;
            MM[str] = temp;
        }
        for(int i = 0; i < N; i++)
        {
            string word;
            int Sum = 0;
            while(cin >> word && word != ".")
            {
                Sum += MM[word];
            }
            cout << Sum << endl;
        }
    }
    return 0;
}
