#include "bits/stdc++.h"
using namespace std;

#define LL long long int

main()
{
    LL T, Case = 0;
    cin >> T;
    while(T-- > 0)
    {
        vector <string> V;
        vector <LL> save;
        LL N, M;
        if(Case == 1)
            cout << endl;
        Case = 1;
        cin >> N >> M;

        for(int i = 0; i < M; i++)
        {
            string str;
            cin >> str;
            V.push_back(str);
        }

        for(int i = 0; i < M; i++)
        {
            string str = V[i];
            LL Count = 0;

            for(int j = 0; j < N; j++)
            {
                for(int k = 0; k < N-1; k++)
                {
                    if(str[k+1] < str[k])
                        Count++, swap(str[k], str[k+1]);
                }
            }

            save.push_back(Count);
        }

        LL mini = *min_element(save.begin(),save.end());

        while(M > 0)
        {
            for(int i = 0; i < V.size(); i++)
            {
                if(save[i] == mini)
                {
                    cout << V[i] << endl;
                    M--;
                }
            }
            mini++;
        }
    }
    return 0;
}

