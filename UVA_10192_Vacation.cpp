#include <bits/stdc++.h>
using namespace std;
string str1, str2;
long int M , N, C[2000][2000];

long int LCS(int M, int N)
{
    for(int i = 1; i<=M; i++)
    {
        for(int j=1; j<=N; j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                C[i][j] = C[i-1][j-1] + 1;
            }
            else
            {
                C[i][j] = max(C[i-1][j],C[i][j-1]);
            }
        }
    }
    return C[M][N];
}

int main()
{
    long int Case=0;
    while(getline(cin,str1))
    {
        Case++;
        getline(cin,str2);
        if(str1=="#" || str2=="#")
            return 0;
        M = str1.length();
        N = str2.length();
        cout << "Case #" << Case << ": you can visit at most " << LCS(M,N) << " cities."<< endl;
    }
    return 0;
}
