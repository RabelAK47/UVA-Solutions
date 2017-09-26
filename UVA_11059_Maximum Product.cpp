#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, A[1000], product, Case=0;
    while(cin >> N)
    {
        Case++;
        int maxi = 0;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for(int j = 0; j < N; j++)
        {
            product=1;
            for(int i=j; i<N && product; i++)
            {
                product*=A[i];

                if(product > maxi)
                {
                    maxi = product;
                }
            }
        }
        cout << "Case #"<< Case << ": The maximum product is "<< maxi << endl;
    }
    return 0;
}
