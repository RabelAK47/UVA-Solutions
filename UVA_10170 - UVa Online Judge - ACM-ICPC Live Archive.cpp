#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int A, B, Sum ;
    while(cin >> A >> B && A && B)
    {
        Sum = 0;
        long int  i =  A;
        int Count;
        for(int i = A; ; i++)
        {
            Sum += i;
            if(Sum >= B)
            {
                Count = i;
                break;
            }
        }
        cout << Count << endl;
    }
    return 0;
}
