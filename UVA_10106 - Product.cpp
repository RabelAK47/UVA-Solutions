#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    while(cin >> str1 >> str2)
    {
        unsigned long long int A = 0, B = 0;
        for(long int i = 0; i < str1.length(); i++)
        {
            A = ((str1[i] - '0') + A*10);
        }
        for(long int i = 0; i < str2.length(); i++)
        {
            B = ((str2[i] - '0') + B*10);
        }
        cout << A*B << endl;
    }
    return 0;
}
