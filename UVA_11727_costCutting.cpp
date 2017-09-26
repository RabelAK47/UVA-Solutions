#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n,i = 0;
    cin >> n;
    while(n--)
    {
        i++;
        int A,B,C,res;
        scanf("%d %d %d",&A,&B,&C);
        if(A==B && B == C)
            res = A;
        else if((A>B&&A<C) || (A>C&&A<B))
            res=A;
        else if((B>A&&B<C) || (B>C&&B<A))
            res=B;
       else if((C>A&&B>C) || (C>B&&A>C))
            res=C;
        printf("Case %d: %d\n",i,res);
    }

return 0;
}
