#include "bits/stdc++.h"
using namespace std;
#define LL long long int
#define MAXI 30005

LL parent[MAXI], ran[MAXI];

void Initial(int N)
{
    for(int i = 1; i <= N; i++)
    {
        parent[i] = i, ran[i] = false;
    }
}
int Findparent(int N)
{
    if(parent[N] == N)
        return N;
    return parent[N] = Findparent(parent[N]);
}

void Unionset(int A, int B)
{
    if(ran[A] > ran[B])
        parent[B] = A;
    else
    {
        parent[A] = B;
        if(ran[A] == ran[B])
            ran[A]++;
    }
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    int T;
    scanf("%d", &T);
    while(T-- > 0)
    {
        map <char, int> Mp;
        string str;
        int N;
        scanf("%d", &N);
        Initial(N);
        getchar();
        while(true)
        {
            if(!getline(cin, str) or str.empty())
                break;
            int A, B; char ch;
            sscanf(str.c_str(), " %c  %d %d", &ch, &A, &B);
            int PA = Findparent(A);
            int PB = Findparent(B);
            if(ch == 'c')
                parent[PA] = parent[PB];
            else
            {
                if(PA == PB)
                    Mp['A']++;  // Count1
                else
                    Mp['B']++; //  Count2
            }
        }
        printf("%d,%d\n", Mp['A'], Mp['B']);
        if(T)
            printf("\n");
    }
    return 0;
}
