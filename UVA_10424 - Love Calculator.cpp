#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int sum_digits(int N)
{
    int Sum = 0;
    while(N)
    {
        Sum += N % 10;
        N /= 10;
    }
    if(Sum > 9)
        return sum_digits(Sum);
    else
        return Sum;
}
int main()
{
    string str1, str2;
    while(getline(cin, str1) && getline(cin, str2))
    {
        int  Sum1 = 0, Sum2 = 0;
        for(int i = 0; i < str1.length(); i++)
        {
            if(islower(str1[i])) Sum1 += str1[i] - 'a' + 1;
            if(isupper(str1[i])) Sum1 += str1[i] - 'A' + 1;
        }
        for(int i = 0; i < str2.length(); i++)
        {
            if(islower(str2[i])) Sum2 += str2[i] - 'a' + 1;
            if(isupper(str2[i])) Sum2 += str2[i] - 'A' + 1;
        }
        //
        int temp1 = sum_digits(Sum1), temp2 = sum_digits(Sum2);

        float f = (float) temp1 / temp2;
        printf("%.2f %%\n", f > 1 ? 100 / f : 100 * f);
    }
    return 0;
}
