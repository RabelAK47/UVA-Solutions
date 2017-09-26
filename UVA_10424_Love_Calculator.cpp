#include <bits/stdc++.h>
using namespace std;

long long int Func(long long int N)
{
    int temp ;
    long long int sum, T;
    if(N<=9)
    {
        return N;
    }
    else
    {
        T = N;
        while(T>9)
        {
            sum = 0;
            while(T!=0)
            {
                temp = T%10;
                sum+=temp;
                T/=10;
            }
            T = sum;
        }
        return sum ;
    }
}
int main()
{
    long long int N, Sum1, Sum2;
    string str1, str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        Sum1 = 0, Sum2 = 0;
        for(int i = 0; i<str1.length(); i++)
        {
            if(str1[i] >=65 && str1[i] <=91)
            {
                str1[i] += 32;
            }
             if(str1[i]>=97 && str1[i]<=123)
            {
                Sum1+=str1[i] - 96;
            }
        }
        for(int i = 0; i<str2.length(); i++)
        {
            if(str2[i] >= 65 && str2[i] <= 91)
            {
                str2[i] += 32;
            }
            if(str2[i]>=97 && str2[i]<=123)
            {
                Sum2+=str2[i] - 96;
            }
        }
        long long int Ans1, Ans2;
        Ans1 = Func(Sum1);
        Ans2 = Func(Sum2);
        if(Ans1 > Ans2)
        {
            double res1 = double(Ans2)/Ans1;
            printf("%.2lf %%\n", res1*100.00);
        }
        else
        {
            double res2 = double(Ans1)/Ans2;
            printf("%.2lf %%\n", res2*100.00);
        }
    }
    return 0;
}
