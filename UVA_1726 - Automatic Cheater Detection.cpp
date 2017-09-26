#include "bits/stdc++.h"
using namespace std;
#define LL long long int
//LL Incorrect[50000], Correct[50000];
//vector <LL> Incorrect, Correct;
int main()
{
    freopen("TLE.txt", "w", stdout);
    LL T;
    scanf("%lld",&T);
    while(T--)
    {
        vector <LL> Incorrect, Correct;
        int  N, X = 0, Y = 0;
        scanf("%d",&N);
        for(int i = 0; i < N; i++)
        {
            int D;
            int S;
            char Ch;
            scanf("%d %d %c",&D,&S,&Ch);

            if(S == 0 && Ch == 'i')
            {
                Incorrect.push_back(D);
            }
            else if(S == 1 && Ch == 'c')
            {
                Correct.push_back(D);
            }
        }
        LL Count = 0;
        for(int i = 0; i < Incorrect.size(); i++)
        {
            for(int j = 0; j < Correct.size(); j++)
            {
                if(Incorrect[i] < Correct[j])
                {
                    Count++;
                }
            }
        }
        printf("%lld\n", Count);
        //cout << Count << endl;
    }
    return 0;
}
