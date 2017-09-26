#include "bits/stdc++.h"
using namespace std;

int main()
{
    int XN[8]= {-1,-1,-1,0,0,1,1,1};
    int YM[8]= {-1,0,1,-1,1,-1,0,1};

    int N, M;
    while(cin >> N >> M && !(M == 0 && N == 0))
    {
        char str[150][150];
        for(int i = 0; i < N; i++)
        {
            cin >> str[i];
        }
        int Count = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                bool flag = true;
                if(str[i][j] == '*')
                {
                    for(int k = 0; k < 8; k++)
                    {
                        if(i+XN[k] >= 0 && i+XN[k] < N)
                        {
                            if(j+YM[k] >= 0 && j+YM[k] < M)
                            {
                                if(str[i+XN[k]][j+YM[k]] == '*')
                                {
                                    flag = false;
                                }
                            }
                        }
                    }
                    if(flag == true)
                    {
                        Count++;
                    }
                }
            }
        }
        cout << Count << endl;
    }
    return 0;
}
