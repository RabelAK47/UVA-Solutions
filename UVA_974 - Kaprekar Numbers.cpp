#include "bits/stdc++.h"
using namespace std;

int Kaprekar_Num[21] = {1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962, 77778};

int main()
{
   // freopen("WA.txt", "w", stdout);
    int T, Case = 0, line = 0;
    scanf("%d",&T);
    while(T--)
    {
        if(line == 1)
            printf("\n");
        line = 1;
        int N, M;
        scanf("%d %d", &N, &M);
        bool flag = false;

        printf("case #%d\n", ++Case);
        for(int i = 0; i < 21; i++)
        {
            if(Kaprekar_Num[i] >= N && Kaprekar_Num[i] <= M)
            {
                printf("%d\n", Kaprekar_Num[i]);
                flag = true;
            }
        }
      if(flag == false)
        printf("no kaprekar numbers\n");
    }
    return 0;
}
