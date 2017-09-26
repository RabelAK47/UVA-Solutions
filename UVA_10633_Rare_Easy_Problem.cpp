#include "bits/stdc++.h"
using namespace std;
#define LLU unsigned long long int

int main()
{
    LLU N;
    while(scanf("%llu", &N) == 1 && N)
        N % 9 == 0 ? printf("%llu %llu\n", ((N*10)/9)-1, (N*10)/9) : printf("%llu\n",(N*10)/9);
    return 0;
}
