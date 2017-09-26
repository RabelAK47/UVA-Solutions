#include "bits/stdc++.h"
using namespace std;

int main()
{
    map<int, string> Mp;
    map<int, string> :: iterator it;

    Mp[0] = " "; Mp[1] = ".,?\""; Mp[2] = "abc";
    Mp[3] = "def"; Mp[4] = "ghi"; Mp[5] = "jkl";
    Mp[6] = "mno"; Mp[7] = "pqrs"; Mp[8] = "tuv";
    Mp[9] = "wxyz";

    int T;
    scanf("%d", &T);
    while(T-- > 0)
    {
        int N;
        scanf("%d", &N);
        vector <int> V1, V2;

        for(int i = 0; i < N; i++)
        {
            int temp;
            scanf("%d", &temp);
            V1.push_back(temp);
        }
        for(int i = 0; i < N; i++)
        {
            int temp;
            scanf("%d", &temp);
            V2.push_back(temp);
        }

        for(int i = 0; i < N; i++)
        {
            string str = "@"; str += Mp[V1[i]];
            printf("%c",str[V2[i]]);
        }
        printf("\n");
    }
    return 0;
}
