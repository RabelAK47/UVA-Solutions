#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

LL maxN = 100050;
bool isP[100050];
map <string, bool> Mp;

void Siv()
{
    memset(isP, true, sizeof isP);
    isP[0] = isP[1] = false;
    for (int i = 4; i < maxN; i += 2)
        isP[i] = false;

    for (int i = 3; i*i < maxN; i += 2)
    {
        if (isP[i])
        {
            for (int j =i*i ; j < maxN; j += i+i)
            {
                isP[j] = false;
            }
        }
    }

    Mp["2"] = true;
    for (int i = 3; i < maxN; i += 2)
    {
        if(isP[i])
        {
            string str;
            ostringstream Con;
            Con << i;
            Mp[Con.str()] = true;
        }
    }
    return;
}
main()
{
    Siv();
    string str;
    while(cin >> str and str != "0")
    {
        priority_queue <LL> PQ;
        for(int d = 5; d >= 1; d--)
        {
            for(int i = 0; i + d - 1 < str.length(); i++)
            {
                LL Prime;
                string sub = str.substr(i, d);
                if(Mp[sub])
                    Prime = atoi(sub.c_str()), PQ.push(Prime);
            }
        }
        printf("%lld\n", PQ.top());
    }
    return 0;
}
