#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Case = 0;
    while(cin >> N && N)
    {
        Case++;
        int Sum = 0;
        for(int i = 0; i<N; i++)
        {
            int Value;
            cin >> Value;
            if(Value > 0)
            {
                Sum++;
            }
            else
            {
                Sum--;
            }
        }
        cout << "Case " << Case <<": " << Sum << endl;
    }
    return 0;
}
