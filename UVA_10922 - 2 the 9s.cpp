#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    string str;
    while(cin >> str && str != "0")
    {
        long int Sum = 0;
        for(int i = 0; i < str.length(); i++)
            Sum += str[i] - '0';

        if(Sum % 9 != 0)
        {
            cout << str << " is not a multiple of 9.\n";
            continue;
        }
        int Count = 1;
        while(Sum > 9)
        {
            int temp = 0;
            while(Sum != 0)
            {
                temp += Sum%10;
                Sum /= 10;
            }
            Sum = temp;
            Count++;
        }
        cout << str << " is a multiple of 9 and has 9-degree " << Count << ".\n";
    }
    return 0;
}
