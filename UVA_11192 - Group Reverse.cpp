//*
//  __________                        ___        \\ ___          __ __ _ _ .   \_
//   \ ______     \               ___|  _/      ||           \\    ||__ _ _ /      ||
//    |                _/          /    __   |         ||         //.     ||_ _ _ .         ||
//    |          |       \        /   /_/    |         ||           \\.    ||__ _ _ _     ||_ _ _ _
//    |_____|_      /    // _____   |         ||  ___  //     ||___ _  /     ||_______\
//                    \ /     \ /            \ /         \ /               \ /                                  \ /
//*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("input.txt", "r", stdin);
   // freopen("output1.txt", "w", stdout);
    int N;
    while(cin >> N && N!=0)
    {
        string str, sub, str2[100];
        cin >> str;
        int K = str.length()/N;
        for(int i = 0; i < str.length(); i = i+K)
        {
            sub = str.substr(i,K);
//            cout << str.substr(i,N) << endl;
            str2[i] = sub;
            reverse(str2[i].begin(),str2[i].end());
            cout <<str2[i];
        }
        cout << endl;
//        for(int i = str.length(); i>=0; i--)
//        {
//            reverse(str2[i].begin(),str2[i].end());
//            cout <<str2[i];
//        }
//        cout << str.substr(N,N) << endl;
//        cout << str.substr(N+N,N) << endl;
//        cout << str.substr(N+N+N,N) << endl;
    }
    return 0;
}
