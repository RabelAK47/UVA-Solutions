#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string str2 ="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

    map <char, char> Mp;
    for(int i = 0; i < str.length(); i++)
        Mp[str[i]] = str2[i];

    string input;
    while(getline(cin,input))
    {
        for(int i = 0; i < input.length(); i++)
            cout << Mp[input[i]];
        cout << endl;
    }
    return 0;
}
