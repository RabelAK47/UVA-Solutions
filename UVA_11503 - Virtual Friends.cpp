
/*
1
6
A C
A B
D E
D F
F G
F A
*/
#include "bits/stdc++.h"
using namespace std;

set <string> St;
map <string, string> parentMap;
map <string, int> ranK, Ans;
vector <pair<string, string> > V;

void RESET()
{
    St.clear(); parentMap.clear();
    ranK.clear(); Ans.clear();
    V.clear();
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
        printf("%d\n", ranK[PA]);
        return;
    }
    ranK[PB] += ranK[PA];
    parentMap[PA] = PB;
    printf("%d\n", ranK[PB]);
    return;
}

int main()
{
    //freopen("WA.txt", "w", stdout);
    int T;
    scanf("%d", &T);
    while(T-- > 0)
    {
        RESET();
        int N;
        scanf("%d", &N);
        while(N-- > 0)
        {
            string A, B;
            cin >> A >> B;
            V.push_back(make_pair(A , B));
            St.insert(A);
            St.insert(B);
        }
        initial();
        for(int i = 0; i < V.size(); i++)
        {
            string PA = Findparent(V[i].first);
            string PB = Findparent(V[i].second);
            if(PA == PB)
                printf("%d\n", ranK[PA]);
            else
                UnionSet(PA, PB);
        }
    }
    return 0;
}
