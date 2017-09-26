#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int N, R, Case = 0;
    while(cin >> N >> R and N and R)
    {
        Case++;
        long int check = (N-1)/R;
        if(check <= 26)
        {
            cout << "Case " << Case << ": " << check << endl;
        }
        else
            cout << "Case " << Case << ": impossible" << endl;
    }
    return 0;
}
