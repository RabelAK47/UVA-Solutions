#include "bits/stdc++.h"
using namespace std;

string str;

void Search()
{
    int len = str.length();
    if(str == "1" || str == "4" || str == "78")
    {
        cout << '+' << endl;
    }
    else if(str.substr(len-2) == "35")
    {
        cout << '-' << endl;
    }
    else if(str[0] == '9' && str[len-1] == '4')
    {
        cout << '*' << endl;
    }
    else if(str.substr(0,3) == "190")
    {
        cout << '?' << endl;
    }
    return;
}
int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        cin >> str;
        Search();
    }
    return 0;
}
