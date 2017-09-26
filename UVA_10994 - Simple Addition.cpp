#include "bits/stdc++.h"
using namespace std;

#define LL          long long int
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}


struct myStruct
{
    LL Sum;
    string name;
    string Party;
};


LL Nth(LL x)
{
    return (x*(x+1)/2);
}

LL Sum(LL x)
{
	if(x < 0)
        return 0;
	if(x < 10)
        return Nth(x);

	return (x/10 * 45) + Nth( x  % 10) + Sum(x/10);
}

main()
{
    Faster;
    LL P, Q;
    while(cin >> P >> Q and !(P < 0 and Q < 0))
        cout << Sum(Q) - Sum(P-1) << endl;
    return 0;
}

