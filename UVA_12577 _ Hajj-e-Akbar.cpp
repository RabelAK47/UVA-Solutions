#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,Case=1;
    string str;
    while(cin>>str && str!="*")
    {
        if(str=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",Case++);
        }
        else if(str=="Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",Case++);
        }
    }
    return 0;
}
