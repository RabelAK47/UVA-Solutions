#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1[20], str2[100];
    str1[0] = "Happy" ; str1[1] = "birthday"; str1[2] = "to"; str1[3] = "you" ;
    str1[4] = "Happy"; str1[5] = "birthday"; str1[6] = "to" ; str1[7] = "you";
    str1[8] = "Happy"; str1[9] = "birthday" ; str1[10] = "to"; str1[11] = "Rujia";
    str1[12] = "Happy" ; str1[13] = "birthday"; str1[14] = "to"; str1[15] = "you" ;
    int N, Count;
    for(int N; cin >> N && N;)
    {
        if(N<=16) Count = 1;
        else if(N <= 32) Count = 2;
        else if(N <= 48) Count = 3;
        else if(N <= 64) Count = 4;
        else if(N <= 80) Count = 5;
        else if(N <= 100) Count = 6;
        for(int i = 0; i < N; i++)
        {
            cin >> str2[i];
        }
        int F = 0;
        for(int i = 0 ; i < Count ; i++ )
        {
            for(int j = 0 ; j < 16 ; j++)
            {
                cout << str2 [ (F%N)  ] << ": " << str1[j] << endl;
                F++;
            }
        }
    }
    return 0;
}
