#include <bits/stdc++.h>
using namespace std;

void Holiday(int A, int B, int C, int Case)
{
    if(A <=20 && B <=20 && C <=20)
        cout << "Case " << Case <<": good" << endl;
    else
        cout << "Case " << Case <<": bad" << endl;
}
int main()
{
    int T, Case = 0;
    cin>>T;
    while(T--)
    {
        Case++;
        int A, B, C;
        cin >> A >> B >> C;
        Holiday(A,B,C, Case);
    }
    return 0;
}
