#include "bits/stdc++.h"
using namespace std;

int main()
{
    int Carmichael_numbers[20] = {561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973, 75361};
    int N;
    while(cin >> N && N)
    {
        bool flag = false;
        for(int i = 0; i < 15; i++)
        {
            if(N == Carmichael_numbers[i])
            {
                flag = true;
                break;
            }
        }
        flag == true ? cout << "The number " << N << " is a Carmichael number." << endl : cout << N << " is normal." << endl;
    }
    return 0;
}
