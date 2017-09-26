#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double area, a, b, c, i, x, s;
    while(cin>>a>>b>>c)
    {
        s = (a+b+c)/2;
        x = s*(s-a)*(s-b)*(s-c);
        x = sqrt(x);
        area = (4.0/3.0)*x;
        if(area>0)
        {
            printf("%.3lf\n",area);
        }
        else
        {
            area = -1;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
