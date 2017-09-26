#include "bits/stdc++.h"
using namespace std;
#define M 18409202//1299709//18409202 // 10^7
int prime[M];
int A[M];
long int t = 0;
bool flag[M];
void siv()
{

    int i , j, val;
    for(int i = 2; i <= M; i++)
    {
        flag[i] = 1;
    }
    for(int i = 2; i <= sqrt(M); i++)
    {
        if(flag[i])
        {
            for(j = i; j * i <= M; j++)
            {
                flag[i*j] = 0;
            }
        }
    }
    for(int i = 0; i <= M; i++)
    {
        if(flag[i])
        {
            prime[t++] = i;
        }
    }
}
int main()
{
    siv();
    int N;
    while(cin >> N)
    {
        for(int T = 1; T <= N; T++)
        {
            string str; cin >> str;
            map <char, int> Mp;
            map <char, int> :: iterator it;
            for(int i = 0; i < str.length(); i++)
                Mp[str[i]]++;

            cout << "Case " << T << ": ";
            str = "";
             for(it = Mp.begin(); it != Mp.end(); ++it)
             {
                 if(flag[it->second])
                     str += it->first;
             }
             str.length() != 0 ? cout << str << endl : cout << "empty" << endl;
        }
    }
    return 0;
}
