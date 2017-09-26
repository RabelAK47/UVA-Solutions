#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int maxi, divisors, LB, UB,loc;
        maxi = 0;
        cin >> LB >> UB;
        if(LB == 1 && UB == 0)
        {
            cout << "Between 1 and 1, 0 has a maximum of 2 divisors." << endl;
             continue;
        }
        for(int i = LB; i <= UB; i++)
        {
            divisors = 0;
            int P = sqrt(i);
            for(int j = 1; j <= P; j++)
            {
                if(i%j == 0)
                {
                    divisors++;
                    if(i/j != j)
                    {
                        divisors++;
                    }
                }
            }
            if(maxi < divisors)
            {
                maxi = divisors;
                loc = i;
            }
        }
        cout << "Between "<< LB << " and " << UB << ", " << loc <<" has a maximum of " << maxi  << " divisors." << endl;
    }
    return 0;
}
