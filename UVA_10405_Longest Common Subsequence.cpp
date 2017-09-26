#include <bits/stdc++.h>
using namespace std;

long int M, N, C[2000][2000];
string str1, str2;

void LCS(int M, int N)
{
    for(int i = 1; i<=M; i++)
        {
            for(int j = 1; j<=N; j++)
            {
                if(str1[i-1] == str2[j-1])
                {
                    C[i][j] = C[i-1][j-1] + 1;
                }
                else
                {
                    C[i][j] = max(C[i][j-1],C[i-1][j]);
                }
            }
        }
        cout << C[M][N] << endl;
}
int main()
{
    while(getline(cin,str1))
    {
        getline(cin,str2);
        M = str1.length();
        N = str2.length();
        LCS(M,N);
    }
    return 0;
}
