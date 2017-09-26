#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, M, Sum = 0, ans;
    while(cin >> N >> M && N && M)
    {
        int flag = 0;
        if(N > M)
        {
            swap(N,M);
//            long int temp = M;
//            M = N;
//            N = temp;
            flag = 1;
        }
        Sum = 0;
        for(int i = N; i <= M; i++)
        {
            ans = 1;
            for(int j = i; j != 1; j = j)
            {
                if(j % 2 == 0)
                {
                    j = j / 2;
                }
                else
                {
                    j = j *3 +1;
                }
                ans += 1;
            }
            if(ans >= Sum)
            Sum = ans;
        }
        if(flag == 0)
            cout << N << " " << M << " " << Sum << endl;
        else
            cout << M << " " << N << " " << Sum << endl;
    }
    return 0;
}
