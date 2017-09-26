#include "bits/stdc++.h"
#define LL long long int
using namespace std;

bool Check(double a, string str, int b)
 {
    if (str == "=") return (a == b);
    if (str == "<=") return (a <= b);
    if (str == ">=") return (a >= b);
    if (str == "<") return (a < b);
    if (str == ">") return (a > b);
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    int N, M;
    while(cin >> N >> M)
    {
        map <string, LL> Mp;
        map <string, LL> :: iterator it;
        for(int i = 0; i < N; i++)
        {
            string str; cin >> str;
            LL temp; cin >> temp;
            char ch; cin >> ch;
            LL temp2; cin >> temp2;
            LL K = temp*10 + temp2;
            Mp[str] = K;
        }

        for(int i = 0; i < M; i++)
        {
            char s[30]; LL Sum = 0, Case = 0;
            while (scanf(" %s ", &s)!=EOF)
            {
                string str2 = (string) s;
                if (str2 == ">" || str2 == "<" || str2== "<=" || str2 == ">=" || str2 == "=")
                {
                    LL digit; cin >> digit;
                    bool Ans = Check(Sum, str2, digit * 10);
                    if (Ans == true)
                        printf("Guess #%d was correct.\n", i+1);
                    else printf("Guess #%d was incorrect.\n", i+1);
                   break;
                }
                Sum += Mp[str2];
            }
        }
    }
    return 0;
}
