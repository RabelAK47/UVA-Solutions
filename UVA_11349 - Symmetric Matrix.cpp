#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

main()
{
    //freopen("WA.txt", "w", stdout);
    LL T, Case = 1;
    scanf("%lld", &T);
    cin.ignore();
    while(T-- > 0)
    {
        char ch;
        cin >> ch >> ch;
        LL N;
        scanf("%lld", &N);
        LL Mat[N][N];
        bool flag = true;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                scanf("%lld", &Mat[i][j]);
                if(Mat[i][j] < 0)
                    flag = false;
            }
        }
        printf("Test #%lld: ", Case++);
        if(flag == false)
        {
            printf("Non-symmetric.\n");
            continue;
        }
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N-1; j++)
            {
                if(Mat[i][j] != Mat[N-1-i][N-1-j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag == false)
                break;
        }
        cout << ((flag == true ? "Symmetric.\n" : "Non-symmetric.\n"));
    }
    return 0;
}
