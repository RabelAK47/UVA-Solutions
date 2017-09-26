#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        int Sum = 0, Count = 0;
        cin>>str;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == 'O')
            {
                Count++;
                Sum = Sum + Count;
            }
            else if(str[i] == 'X')
            {
                Count = 0;
                Sum = Sum + Count;
            }
        }
        cout << Sum << endl;
    }
    return 0;
}
