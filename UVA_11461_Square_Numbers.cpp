#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, ans;
    int sq1, sq2;
    double sqdouble;
    while(cin >> A >> B)
    {
        if(A == 0 && B==0)
        {
            return 0;
        }
        sqdouble = sqrt(A);
        sq1 = sqrt(A);
        sq2 = sqrt(B);
        ans = (sq2 - sq1);
        if(sq1 == sqdouble)
        {
            ans+=1;
        }
        cout << ans << endl;
    }
    return 0;
}
