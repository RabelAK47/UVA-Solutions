#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T, Case = 0;
    scanf("%d",&T);
    while(T-- > 0)
    {
        string str1, str2;
        cin >> str1 >> str2;
        printf("Case %d: ",++Case);

        if(str1.length() != str2.length())
        {
            printf("-1\n");
            continue;
        }
        map <char, int> Mp1, Mp2;
        map <string, int> Mp3;
        for(int i = 0; i < str1.length(); i++)
        {
            Mp1[str1[i]]++;
            Mp2[str2[i]]++;
            if(str1[i] ==  '0' && str2[i] == '1')
                Mp3["01"]++;
            if(str1[i] == '1' && str2[i] == '0')
                Mp3["10"]++;
        }
        if(Mp1['1'] > Mp2['1'])
        {
            printf("-1\n");
            continue;
        }
        int Ans = Mp1['?'] + max(Mp3["01"],Mp3["10"]);

        printf("%d\n",Ans);
    }
    return 0;
}
