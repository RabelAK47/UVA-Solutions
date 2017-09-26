#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int Ans, A, B, C;
        cin>>A>>B>>C;
        Ans = C*(A+(A-B))/(A+B);
        if(Ans <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << Ans << endl;
        }
    }
}
