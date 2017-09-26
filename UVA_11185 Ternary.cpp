#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[1000], i=1,j;
    long long int N, rem, quotient;
    while(cin >> N)
    {
        if(N==0)
        {
            cout << 0;
        }
        else if(N<0)
        {
            return 0;
        }
            quotient = N;
            i = 1;
        while(quotient!=0)
        {
            A[i++] = quotient % 3;
            quotient = quotient / 3;
        }
        for(j = i - 1 ; j> 0; j--)
        {
            cout << A[j];
        }
        cout << endl;
    }
    return 0;
}
