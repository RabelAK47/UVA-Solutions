#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str;
    while(getline(cin, str))
    {
        bool flag = false;
        string temp, S;
        istringstream Is(str);
        while(Is >> S)
        {
            if(flag == true)
                temp += ' ';
            reverse(S.begin(), S.end());
            temp += S;
            flag = true;
        }
        cout << temp << endl;
    }
    return 0;
}
