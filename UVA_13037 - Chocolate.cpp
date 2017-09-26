#include "bits/stdc++.h"
using namespace std;
#define LL  long long int
#define write()     freopen("WA.txt", "w", stdout);

main()
{
   // write();
    LL T, Case = 1;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        LL L, R, S;
        set <LL> St;
        set <LL> :: iterator it;
        map <LL, bool> MpL, MpR, MpS;
        scanf("%lld %lld %lld", &L, &R, &S);

        for(int i = 0; i < L; i++)
        {
            LL temp;
            scanf("%lld", &temp);
            St.insert(temp);
            MpL[temp] = true;
        }

        for(int i = 0; i < R; i++)
        {
            LL temp;
            scanf("%lld", &temp);
            St.insert(temp);
            MpR[temp] = true;
        }

        for(int i = 0; i < S; i++)
        {
            LL temp;
            scanf("%lld", &temp);
            St.insert(temp);
            MpS[temp] = true;
        }

        map <char, LL> MpLeft, MpRight;
        for(it = St.begin(); it != St.end(); ++it)
        {
            if(MpL[*it] == true and MpR[*it] == false and MpS[*it] == false)
                MpLeft['L']++;

            if(MpR[*it] == true and MpL[*it] == false and MpS[*it] == false)
                MpLeft['R']++;

            if(MpS[*it] == true and MpL[*it] == false and MpR[*it] == false)
                MpLeft['S']++;

            if(MpL[*it] == false and MpR[*it] == true and MpS[*it] == true)
                MpRight['L']++;

            if(MpR[*it] == false and MpL[*it] == true and MpS[*it] == true)
                MpRight['R']++;

            if(MpS[*it] == false and MpL[*it] == true and MpR[*it] == true)
                MpRight['S']++;
        }

        printf("Case #%lld:\n", Case++);
        printf("%lld %lld\n", MpLeft['L'], MpRight['L']);
        printf("%lld %lld\n", MpLeft['R'], MpRight['R']);
        printf("%lld %lld\n", MpLeft['S'], MpRight['S']);
    }
    return 0;
}
