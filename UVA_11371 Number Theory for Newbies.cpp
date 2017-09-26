#include "bits/stdc++.h"
using namespace std;

bool comp(char a, char b)
{
    return a > b;
}
int main()
{
    //freopen("WA.txt", "w", stdout);
    string str;
    while(cin >> str)
    {
        string temp = str;
        sort(str.begin(),str.end());
        int j = 0;
        while (j < str.length() && str[j] == '0')
            j++;
        if (j < str.length())
        {
            swap(str[0], str[j]);
        }
        sort(temp.begin(),temp.end(),comp);

        long long int A, B;
        stringstream AA(str), BB(temp);
        AA >> A;
        BB >> B;
        cout << B << " - " << A << " = " << B-A << " = 9 * " << (B-A)/9 << endl;
    }
    return 0;
}
