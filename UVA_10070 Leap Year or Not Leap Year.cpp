#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans_4, ans_15, ans_55, ans_100, ans_400;
    int flag = 0;
    string str;
    while(cin >> str)
    {
        if(flag>0)
            cout << endl;
        flag++;
        ans_4 = 0,  ans_15 = 0, ans_55 = 0, ans_100 = 0, ans_400 = 0;
        for(int i = 0; i< str.length(); i++)
        {
            ans_4 = (ans_4*10 + str[i] - '0')%4;
            ans_15 = (ans_15*10 + str[i] - '0')%15;
            ans_55 = (ans_55*10 + str[i] - '0')%55;
            ans_100 = (ans_100*10 + str[i] - '0')%100;
            ans_400 = (ans_400*10 + str[i]- '0')%400;
        }
        if((ans_4==0 && ans_100!=0) || ans_400==0)
        {
            cout << "This is leap year." << endl;
            if(ans_15 == 0)
            {
                cout << "This is huluculu festival year." << endl;
            }
            if(ans_55==0)
            {
                cout << "This is bulukulu festival year." << endl;
            }
        }
        else
        {
            if(ans_15==0)
            {
                cout << "This is huluculu festival year." << endl;
            }
            else
            {
                cout << "This is an ordinary year." << endl;
            }
        }
    }
    return 0;
}
