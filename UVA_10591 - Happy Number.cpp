#include <bits/stdc++.h>
using namespace std;

int  Happy(int N)
{
    int sum = 0;
    if(N <= 9)
        return N;
    while(N!=0)
    {

        sum += ((N%10)*(N%10));
        N/=10;
    }
    Happy(sum);
}
int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        Case++;
        int N;
        cin >> N;
        int H = Happy(N);
        if(N == 7)
            cout << "Case #" << Case << ": " << N << " is a Happy number." << endl;
        else if(H == 1)
            cout << "Case #" << Case << ": " << N << " is a Happy number." << endl;
        else
            cout << "Case #" << Case << ": " << N << " is an Unhappy number." << endl;
    }
    return 0;
}
