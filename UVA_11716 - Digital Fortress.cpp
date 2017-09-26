#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    cin.ignore();
    while(T--)
    {
        string str, strF;
        getline(cin, str);

        int sq = (int) sqrt(str.length());
        if(sq * sq != str.length())
        {
            printf("INVALID\n");
            continue;
        }
        for(int i = 0; i < sq; i++)
        {
            for(int j = i; j < str.length(); j += sq)
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
