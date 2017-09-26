#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
    stack <string> St;
    int T;
    scanf("%d", &T);
    while(T-- > 0)
    {
        string str;
        cin >> str;
        if(str == "Sleep")
        {
            string temp; cin >> temp;
            St.push(temp);
        }
        else if(str == "Kick")
        {
            if(!St.empty())
                St.pop();
        }
        else if(str == "Test")
        {
            if(St.empty())
                printf("Not in a dream\n");
            else
                cout << St.top() << endl;
        }
    }
    return 0;
}
