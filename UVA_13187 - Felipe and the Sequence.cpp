#include "bits/stdc++.h"
using namespace std;

#define LL          long long int
#define ULL         unsigned long long
#define makeint(n,s)  istringstream(s)>>n
#define string_to_int(str) atoll(str.c_str());

#define LCM(A,B)    ((__gcd(A,B))/A)*B
#define GCD(A,B)     __gcd(A,B)

#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}

#define Scan(A)         scanf("%lld", &A)
#define Scan2(A, B) 	scanf("%lld %lld",&A, &B)
#define Scan3(A, B, C) 	scanf("%lld %lld %lld",&A, &B, &C)
#define Scan4(A, B, C, D) 	scanf("%lld %lld %lld %lld",&A, &B, &C, &D)

int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
int dx4[] = {0, 1, 0, -1};
int dy4[] = {-1, 0, 1, 0};

bool isvowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}


main()
{
    Faster;
    LL T;
    Scan(T);
    while(T-- > 0)
    {
        LL N;
        Scan(N);
        N += 1;
        LL ans = (N*N)-1;
        printf("%lld\n", ans);
    }
}
/*
1
200

out:40400
*/

