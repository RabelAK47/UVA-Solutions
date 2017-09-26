#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    while(scanf("%d",&T) == 1 && T)
    {
        vector <int> V;
        for(int i = 0; i < T; i++)
        {
            int temp; scanf("%d",&temp);
            if(temp > 0)
                V.push_back(temp);
        }
        if(V.size() == 0)
        {
            printf("%d\n",V.size());
            continue;
        }
        else
        {
            for(int i = 0; i < V.size(); i++)
            {
                if(i > 0)
                    printf(" ");
                printf("%d", V[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
