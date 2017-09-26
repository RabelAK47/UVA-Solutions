//#include<stdio.h>
//
//int main()
//{
//    long int n,t,value,i,max,Case=0,j;
//    while(scanf("%ld",&t)==1)
//    {
//        for(j=1; j<=t; j++)
//        {
//            scanf("%ld",&n);
//            for(i=1; i<=n; i++)
//            {
//                scanf("%ld",&value);
//                if(value>max)
//                {
//                    max=value;
//                }
//            }
//            Case++;
//            printf("Case %ld: %ld\n",Case,max);
//            max=0;
//        }
//    }
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Case = 0, N, T, A[1000];
    cin >> T;
    while(T--)
    {
        Case++;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A,A+N);
        cout << "Case " << Case << ": " << A[N-1] << endl;
    }
}
