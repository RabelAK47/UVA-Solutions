#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        double len,wide,radius,Red,Green;
        scanf("%lf",&len);
        wide=(len*6)/10;
        radius=len/5;
        Red=pi*radius*radius;
        Green=(len*wide)-Red;
        printf("%.02lf %.02lf\n",Red,Green);
    }
    return 0;
}
