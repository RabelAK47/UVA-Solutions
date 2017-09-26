#include "bits/stdc++.h"
using namespace std;

int main()
{
    double H, M;
    while(scanf("%lf:%lf",&H,&M) == 2)
    {
        if(H == 0 && M == 0)
            return 0;
        double Hour = (H + M/60) * 30;
        double Minute = M * 6;
        double Angle = abs(Hour - Minute);

        if(Angle > 180)
        {
            Angle = 360 - Angle;
        }

        printf("%0.3lf\n",Angle);
    }
    return 0;
}
