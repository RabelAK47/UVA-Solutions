#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    unsigned long long int ans, x, y;
    while(cin>>x)
    {
        ans = 3*(((x+1) * (x+1)/2)-3);
        cout<<ans<<endl;
    }
    return 0;
}
