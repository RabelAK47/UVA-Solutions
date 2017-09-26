#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    double R, N, Area;
    while(cin>>R>>N)
    {
        Area = R*R*N*sin((2*pi)/N);
        Area = Area/2;
        printf("%.3lf\n",Area);
    }
        return 0;
}
