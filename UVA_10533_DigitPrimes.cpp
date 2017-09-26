#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h>
#define MAX 1000002
using namespace std;
int flag[MAX];
int A[MAX];
int pre[MAX];

void seive()
{
    int i,j,lim;
    for(i=1; i<=MAX; i++)
    {
        A[i]=1;
    }
    lim=int (sqrt(MAX));
    A[0] = 0;
    A[1] = 0;
    for(i=2; i<=lim; i++)
    {
        if(A[i]==1)
        {
            for(j=i+i; j<=MAX; j=j+i)
            {
                A[j]=0;
            }
        }
    }
    int p =0;
     for(i=2; i<MAX; i++)
    {
        if(A[i]==1)
        {
            flag[p]=i;
            p++;
        }
    }
    return ;
}
int rev(int n)
{
    int res=0,tmp,sum=0;
    while(n!=0)
    {
        tmp=n%10;
        n=n/10;
        sum=sum+tmp;
    }
    return sum;
}
void precalc()
{
    for(int i=2; i<MAX; i++)
    {
        if(A[i]==1)
        {
            int n=i;
            if(A[rev(n)]==1)
            {
                pre[i] = 1;
            }
        }
    }
    for(int i=1; i<MAX;i++)
    {
        pre[i] = pre[i]+pre[i-1];
    }
    return ;
}
int main()
{
    seive();
    precalc();
    long int x,y,T;
    cin>>T;
    while(T--)
    {
        cin>>x>>y;
        cout<<pre[y] - pre[x-1] <<endl;
    }
    return 0;
}

