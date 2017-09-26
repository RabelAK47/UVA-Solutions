#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
       // :( equals sad.  :"> A blush ;) wink :D a grin :-> smug :P tongue out <3 for a heart  :O sometimes
        int Count = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if( (str[i] == ':' && str[i+1] == '(') || (str[i] == ':' && str[i+1] == '"' && str[i+2] == '>') || (str[i] == ';' && str[i+1] == ')') || (str[i] == ':' && str[i+1] == 'D') ||
               (str[i] == ':' && str[i+1] == 'P') || (str[i] == ':' && str[i+1] == '-' && str[i+2] == '>' ) || (str[i] == '<' && str[i+1] == '3') || (str[i] == ':' && str[i+1] == 'O'))
            {
                Count++;
            }
        }
        cout << Count  << endl;
    }
}
//:D :D I love string ;) ;) Do you <3 string?   == 5
//Hello How are you? :P :D <3 ;) Hey :P :-> :O  == 7
//:( equals sad. :">  ;) wink :D  :-> smug :P  <3 for a heart :O  :( equals sad. :">  ;) wink :D  :-> smug :P out <3  :O .== 16
//:( :D :P :( :/ :/ :P :H <3 :-> :"> :O
// :D Hello : world :P <3 Hello :P :D :D :D :P <3 :-> :O :O :O :P :">  ;)  :D a grin :->  :P  <3 for a heart  :O
