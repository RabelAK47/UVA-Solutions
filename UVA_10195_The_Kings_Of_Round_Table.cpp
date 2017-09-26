#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, z, s, R;
    while(cin>>x>>y>>z)
    {
        if(x == 0 || y == 0 || z == 0)
        {
            R = 0;
            printf("The radius of the round table is: %.3lf\n",R);
        }
        else
        {
            s = (x+y+z)/2;
            R = sqrt(((s-x) * (s-y) * (s-z))/s);
            printf("The radius of the round table is: %.3lf\n",R);
        }
    }
    return 0;
}
