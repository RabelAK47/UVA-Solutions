#include "bits/stdc++.h"
using namespace std;

string str1, str2;
vector <string> V1, V2;

void Decorate_Input(string str1, string str2)
{
    for(int i = 0; i < str1.length(); i++)
    {
        if(isalpha(str1[i]) || isalnum(str1[i]))
            continue;
        else
            str1[i] = ' ';
    }
    for(int i = 0; i < str2.length(); i++)
    {
        if(isalpha(str2[i]) || isalnum(str2[i]))
            continue;
        else
            str2[i] = ' ';
    }

    string S1, S2;
    istringstream IS(str1);
    while(IS >> S1)
        V1.push_back(S1);
    istringstream KS(str2);
    while(KS >> S2)
        V2.push_back(S2);
}
void Algo_LCS(int Case)
{
    printf("%2d.", Case);
    if(V1.size() == 0 || V2.size() == 0)
    {
        printf(" Blank!\n");
        return;
    }

    int L[V1.size()+5][V2.size()+5];
    for(int i = 0; i <= V1.size(); i++)
    {
        for(int j = 0; j <= V2.size(); j++)
        {
            if(i == 0 || j == 0)
                L[i][j] = 0;
            else if(V1[i-1] == V2[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    printf(" Length of longest match: %d\n", L[V1.size()][V2.size()]);
}

int main()
{
//    freopen("WA.txt", "w", stdout);
    int Case = 0;
    while(getline(cin, str1))
    {
        getline(cin, str2);
        Case++;
        V1.clear();
        V2.clear();
        Decorate_Input(str1, str2);
        Algo_LCS(Case);
    }
    return 0;
}
