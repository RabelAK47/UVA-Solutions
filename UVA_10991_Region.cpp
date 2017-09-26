#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main()
{
    double R1, R2, R3, a, b, c, A, B, C, Area, S;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>R1>>R2>>R3;
        a = R1 + R2;
        b = R2 + R3;
        c = R3 + R1;
        S = (a + b + c) / 2;
        A = acos(( b*b + c*c - a*a) / (2* b*c));
        B = acos(( a*a + c*c - b*b) / (2* a*c));
        C = acos(( a*a + b*b - c*c) / (2* a*b));
        Area = sqrt(S*(S-a)*(S-b)*(S-c))  -  (R1*R1*B + R2*R2*C + R3*R3*A) /2;
        printf("%.6lf\n",Area);
    }
    return 0;
}
