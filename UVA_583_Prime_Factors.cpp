#include "bits/stdc++.h"
using namespace std;

long int N, A[10010];
void Prime_Factorization()
{
      long int i = 2, k = 0;
//   if(N < 0)
//   {
//       printf("-1 x ");
////       while(N!=-1)
////        {
////            if(N%i==0)
////            {
////                while(N%i==0)
////                {
////                printf("%d ",i);
////                    N=N/i;
////                    if(N!=-1)printf("x ");
////                }
////            }
////            i++;
////        }
////         printf("\n");
////         return;
//        N = abs(N);
//   }
    for( i = 2; i*i <= N; i++)
    {
        if(N%i == 0)
        {
            while(N%i == 0)
            {
                N /= i;
                A[k] = i;
                k++;
            }
        }
    }
    if(N != 1)
    {
        A[k] =  N;
        k++;
    }
    for(int i = 0; i < k; i++)
    {
        cout << A[i];
        if(i != k-1)
        {
            cout << " x ";
        }
    }
    cout << endl;
}
int main()
{
    while(cin >> N && N != 0)
    {
        cout << N << " = ";
        if(N < 0)
        {
            cout << "-1 x ";
            N = abs(N);
        }
        Prime_Factorization();
    }
    return 0;
}
