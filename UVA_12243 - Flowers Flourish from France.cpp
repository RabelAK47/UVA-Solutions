#include "bits/stdc++.h"
using namespace std;


#define oo          (1<<30)
#define SZ(a)       (int)a.size()
#define LL          long long
#define ULL         unsigned long long
#define ISS         istringstream
#define OSS         ostringstream
#define VS          vector <string>
#define VI          vector <int>
#define VD          vector <double>
#define VLL         vector <long long>
#define SII         set<int>::iterator
#define SI          set<int>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fs          first
#define sc          second
#define pii         pair < int , int >

#define EQ(a,b)     (fabs(a-b)<ERR)
#define all(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define sqr(a)      ((a)*(a))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
#define BE(a)       a.begin(),a.end()
#define RBE(a)      a.rbegin(),a.rend()
#define rev(a)      reverse(BE(a));
#define sorta(a)    sort(BE(a))
#define pb          push_back
#define popb        pop_back
#define round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;
#define makeint(n,s)  istringstream(s)>>n

#define LCM(A,B)    ((__gcd(A,B))/A)*B
#define GCD(A,B)     __gcd(A,B)

#define YES     deb("YES")
#define Yes     deb("Yes")
#define yes     deb("yes")
#define NO      deb("NO")
#define No      deb("No");
#define no      deb("no");

#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);


#define PI          3.141592653589793
#define pi          2*acos(0)
#define ERR         1e-5
#define PRE         1e-8
#define MAX         1000009

bool isvowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

main()
{
    string str;
    while(getline(cin, str) and str != "*")
    {
        string S;
        istringstream is(str);
        char ch = toupper(str[0]);
        LL j = 0, Count = 0;

        while(is >> S)
        {
            if(ch == toupper(S[0]))
                Count++;
            j++;
        }

        Count == j ? printf("Y\n") : printf("N\n");
    }
    return 0;
}
