#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0; cin >> T;
    cin.ignore();
    while(T--)
    {
        string str;
        getline(cin,str);
        int Count = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'a' || str[i] == 'd' || str[i] == 'g' || str[i] == 'j' || str[i] == 'm' || str[i] == 'p' || str[i] == 't' || str[i] == 'w' || str[i] == ' ')
                Count+=1;
            else if(str[i] == 'b' || str[i] == 'e' || str[i] == 'h' || str[i] == 'k' || str[i] == 'n' || str[i] == 'q' || str[i] == 'u' || str[i] == 'x')
                 Count += 2;
            else if(str[i] == 'c' || str[i] == 'f' || str[i] == 'i' || str[i] == 'l' || str[i] == 'o' || str[i] == 'r' || str[i] == 'v' || str[i] == 'y')
                Count += 3;
            else if(str[i] == 's' || str[i] == 'z')
                Count += 4;
        }
        cout << "Case #" << ++Case << ": " << Count << endl;
    }
    return 0;
}
