#include "bits/stdc++.h"
using namespace std;

#define oo          (1<<30)
#define SZ(a)       (int)a.size()
#define LL          long long int
#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}

LL FactDP[21];

void Factorial()
{
    FactDP[0] = 1;
    for(int i = 1; i < 21; i++)
        FactDP[i] = FactDP[i-1] * i;
    return;
}

void GetPermut(string str, LL N)
{
    LL len = str.length();
    string result(str);

    for(int i = 0; i < len; i++)
    {
        sort(result.begin()+i, result.end());
        if(N == 0)
            break;
        LL Pos = i + (N / FactDP[len-i-1]);
        swap(result[i], result[Pos]);
        N = N % FactDP[len-i-1];
    }

    cout << result << endl;
}

int main()
{
    //write();
    Faster;
    Factorial();
    LL T;
    cin >> T;
    while(T-- > 0)
    {
        string str;
        LL N;
        cin >> str >> N;
        GetPermut(str, N);
    }
    return 0;
}

/*

*/
