

//          **************************************
//          *           Rabel(AK47)              *
//          *                                    *
//          **************************************

#include <bits/stdc++.h>
using namespace std;

string str;
int A , B , T , W , K;

void Washes(int Case)
{
    if(A+B == K && B != 0)
    {
        cout <<"Case " << Case <<": BANGLAWASH"<< endl;
    }
    else if(A+W == K && W != 0)
    {
        cout <<"Case " << Case <<": WHITEWASH"<< endl;
    }
    else if(A == K)
    {
        cout <<"Case " << Case<< ": ABANDONED" << endl;
    }
    else if(B > W)
    {
        cout <<"Case " << Case << ": BANGLADESH " << B << " - " << W << endl;
    }
    else if(B < W)
    {
        cout <<"Case " << Case << ": WWW " << W << " - " << B << endl;
    }
    else if(B == W)
    {
        cout <<"Case " << Case << ": DRAW " << B << " " << T <<endl;
    }
    return;
}
void Count()
{
    A = 0, B = 0, T = 0, W = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'A')
        {
            A++;
        }
        else if(str[i] == 'B')
        {
            B++;
        }
        else if(str[i] == 'W')
        {
            W++;
        }
        else if(str[i] == 'T')
        {
            T++;
        }
    }
    return;
}
int main()
{
    int N, Case = 0;
    cin >> N;
    while(N--)
    {
        Case++;
        cin >> K;
        cin >> str;
        Count();
        Washes(Case);
    }
    return 0;
}
