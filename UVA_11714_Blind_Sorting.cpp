#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        N--;
        if(N>=1)
        {
            cout<<N+(int) log2(N)<<endl;
        }
    }
    return 0;
}
