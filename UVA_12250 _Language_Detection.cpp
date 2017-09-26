#include <bits/stdc++.h>
using namespace std;

void Language(string str)
{
    string lang;
    if(str=="HELLO")
        lang = "ENGLISH";
    else if(str == "HOLA")
        lang = "SPANISH";
    else if(str == "HALLO")
        lang = "GERMAN";
    else if(str =="BONJOUR")
        lang = "FRENCH";
    else if(str =="CIAO")
        lang = "ITALIAN";
    else if(str =="ZDRAVSTVUJTE")
        lang = "RUSSIAN";
    else
        lang = "UNKNOWN";
    cout << lang << endl;
}
int main()
{
    int Case = 0 ;
    string str;
    while(cin >> str && str != "#")
    {
        Case++;
        cout << "Case " << Case <<": ";
        Language(str);
    }
    return 0;
}

