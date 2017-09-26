#include "bits/stdc++.h"
#include "map"
using namespace std;

int main()
{
    map <string, string> Mp;
    string str;
    while(getline(cin,str) && str[0] != '\0')
    {
        stringstream Is(str);
        string First, Second;
        Is >> First;
        Is >> Second;
        Mp[Second] = First;
    }
    string Check;
    while(cin >> Check)
    {
        (Mp[Check] != "") ? cout << Mp[Check] << endl : cout << "eh" << endl;
    }
    return 0;
}

