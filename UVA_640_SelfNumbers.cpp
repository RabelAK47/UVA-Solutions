#include "bits/stdc++.h"
using namespace std;
#define LL long long int
#define MAX 1000001
bool check[MAX];

int main()
{
    memset(check, sizeof(check), false);
    LL temp = 0, Sum = 0;
    for(int i = 1; i < MAX; i++)
    {
        Sum = temp = i;
        while(temp)
        {
            Sum += temp%10;
            temp /= 10;
        }
        if(Sum < MAX)
        check[Sum] = true;
    }
    for(int i = 1; i < MAX; i++)
    {
        if(check[i] == false)
            printf("%d\n", i);
    }
    return 0;
}
