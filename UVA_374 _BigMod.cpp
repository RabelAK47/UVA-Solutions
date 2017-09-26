#include <bits/stdc++.h>
using namespace std;

/// BIG MOD
int Mod;
int BigMod(int  Base, int Power)
{
	if(Power == 0)
        return 1;
	if(Power %2 == 0)
	{
	    int ret = BigMod(Base, Power/2);
		return ((ret % Mod)*(ret % Mod))%Mod;
	}
	else
        return ((Base%Mod) * (BigMod(Base,Power-1)% Mod)) % Mod;
}
    int main()
    {
        int Base, Power;
        while(cin >> Base >> Power >> Mod)
        {
            cout << BigMod(Base,Power) << endl;
        }
        return 0;
    }
