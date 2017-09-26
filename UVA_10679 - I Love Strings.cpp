#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int T;
    cin >> T;
    while(T--)
    {
        string str1;
        cin >> str1;
        long int N;
        cin >> N;
        while(N--)
        {
            string str2;
            cin >> str2;
            if(str1.substr(0,str2.size()) == str2)
            {
                cout << "y" << endl;
            }
            else
                cout << "n" << endl;
        }
    }
    return 0;
}
