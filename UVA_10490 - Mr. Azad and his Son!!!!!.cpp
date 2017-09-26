#include <bits/stdc++.h>
#define max 1000000
using namespace std;
int a[max];

void seive()
{
    int i,j,lim;
    for(i=1; i<=max; i++)
    {
        a[i]=1;
    }
    lim=int (sqrt(max));

    for(i=2; i<=lim; i++)
    {
        if(a[i]==1)
        {
            for(j=i+i; j<=max; j=j+i)
            {
                a[j]=0;
            }
        }
    }
}
int main()
{
    seive();
    long long int N;
    while(cin>>N)
    {
        if(N==0)
            break;
        else if(N==2 || N== 3 || N==5 || N==7 || N==13 || N==17|| N== 19 || N==31)
        {
            long long int A,B,ans;
            A = pow(2,N-1);
            B = pow(2,N)-1;
            ans = A*B;
            cout << "Perfect: " << ans <<"!" <<endl;
        }
        else if(a[N]==1)
        {
            cout << "Given number is prime. But, NO perfect number is available." << endl;
        }
        else
        {
            cout << "Given number is NOT prime! NO perfect number is available." <<endl;
        }
    }
    return 0;
}
