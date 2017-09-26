#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int T,A,B;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        if(B%A==0)
            cout<<A<<" "<<B<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}
