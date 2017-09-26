#include "bits/stdc++.h"
using namespace std;

set <string> St;
map <string, string> parentMap;
map <string, int> ranK, Ans;
priority_queue <int> PQ;
//vector <pair<string, string> > V;

void RESET()
{
    St.clear(); parentMap.clear();
    ranK.clear(); Ans.clear();
    //V.clear();
}

void initial()
{
    for(set <string> :: iterator it = St.begin(); it != St.end(); ++it)
    {
        parentMap[*it]  = *it;
        ranK[*it] = 1;
    }
}

string Findparent(string A)
{
    if(parentMap[A] == A) return A;
    else return parentMap[A] = Findparent(parentMap[A]);
}

void UnionSet(string PA, string PB)
{
    if(ranK[PA] > ranK[PB])
    {
        ranK[PA] += ranK[PB];
        parentMap[PB] = PA;
        PQ.push(ranK[PA]);
        return;
    }
    ranK[PB] += ranK[PA];
    parentMap[PA] = PB;
    PQ.push(ranK[PB]);
    return;
}

int main()
{

    //freopen("WA.txt", "w", stdout);
    int N, M;
    while(scanf("%d %d", &N, &M) == 2 && !(N == 0 && M == 0))
    {
        while(N--> 0)
        {
            string str; cin >> str;
            St.insert(str);
        }
        initial();
        PQ.push(1);
        while(M-- > 0)
        {
            string A, B;
            cin >> A >> B;
            string PA = Findparent(A);
            string PB = Findparent(B);
            if(PA == PB)
                PQ.push(ranK[PA]);
            else
                UnionSet(PA, PB);
        }
        printf("%d\n", PQ.top());
        while(!PQ.empty())
            PQ.pop();
    }
    return 0;
}
