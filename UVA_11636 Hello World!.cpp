#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Case = 0;
    while((cin>>N) && (N>=0))
    {
        Case++;
        if(N==1)
        {
            cout << "Case " << Case << ": " << 0 << endl;
        }
        for(int i=0; i<14; i++)
        {
            if(pow(2,i) < N && N <= pow(2,i+1))
                {
                        cout << "Case " << Case << ": " << i+1 << endl;
                }
        }
    }
    return 0;
}
