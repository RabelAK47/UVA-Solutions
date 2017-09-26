#include "bits/stdc++.h"
using namespace std;

template <class T1> void deb(T1 e){cout << e << endl;}
template <class T1,class T2> void deb(T1 e1,T2 e2){cout << e1 << " "<< e2 << endl;}
template <class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout << e1 << " " << e2 << " " << e3 << endl;}
#define LL          long long int

main()
{
    LL N, temp;
    while(scanf("%lld", &N) == 1 and N != 0)
    {
        vector <LL> V, Left, Right, MxV, TempV;
        V.push_back(N);

        for(int i = 0; ;i++)
        {
            scanf("%lld", &temp);
            if(temp == 0)
                break;
            else
                V.push_back(temp);
        }

        sort(V.begin(), V.end());
        LL mx = V[V.size()-1];

        for(int i = 0; i < V.size(); i++)
        {
            if(V[i] == mx)
                MxV.push_back(mx);
            else
                TempV.push_back(V[i]);
        }

        if(TempV.size()%2 == 1 or MxV.size()%2 == 0)
        {
            printf("NO\n");
            V.clear(); Left.clear(); Right.clear(); MxV.clear(), TempV.clear();
            continue;
        }

        bool flag = true;
        for(int i = 0; i < TempV.size(); i += 2)
        {
            if(TempV[i] == TempV[i+1])
                Left.push_back(TempV[i]), Right.push_back(TempV[i]);
            else
            {
                flag = false;
                break;
            }
        }

        if(flag == false)
        {
            printf("NO\n");
            V.clear(); Left.clear(); Right.clear(); MxV.clear(), TempV.clear();
            continue;
        }

        vector <LL> Fin;
        for(int i = 0; i < Left.size(); i++)
            Fin.push_back(Left[i]);

        for(int i = 0; i < MxV.size(); i++)
            Fin.push_back(MxV[i]);

        sort(Right.rbegin(), Right.rend());
        for(int i = 0; i < Right.size(); i++)
            Fin.push_back(Right[i]);

        printf("%lld", Fin[0]);
        for(int i = 1; i < Fin.size(); i++)
            printf(" %lld", Fin[i]);
        printf("\n");
        V.clear(); Left.clear(); Right.clear(); MxV.clear(), TempV.clear();
    }
    return 0;
}
/*
2 3 2 3 5 7 5 0
2 2 7 10 0
10 0
0
*/

