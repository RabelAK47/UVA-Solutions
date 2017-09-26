#include "bits/stdc++.h"
using namespace std;
#define LL long long int

LL Octal(LL octal)
{
    LL decimal = 0;
    int i = 0;
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    return decimal;
}

LL Hexa2(string hexadecimal)
{
    LL decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                          '9', 'A', 'B', 'C', 'D', 'E', 'F'
                         };
    int i, j, power=0, digit;
    for(i=hexadecimal.length()-1; i >= 0; i--)
    {
        for(j=0; j<16; j++)
        {
            if(hexadecimal[i] == hexDigits[j])
            {
                decimalNumber += j*pow(16, power);
            }
        }
        power++;
    }
    return decimalNumber;
}

LL Func1(string str)
{
    stringstream ss(str);
    LL x;
    ss >> x;
    return x;
}

LL Func2(string str)
{
    str = str.substr(1, str.length());
    stringstream ss(str);
    LL x;
    ss >> x;
    x = Octal(x);
    return x;
}

LL Func3(string str)
{
    str = str.substr(2, str.length());
    stringstream ss(str);
    LL x;
    ss >> x;
    x = Hexa2(str);
    return x;
}

void solve(LL x, LL N)
{
    string p;
    LL num, Count = 0;
    cin >> p >> num;

    if(p == "++i")
    {
        if(++x != num)
            x = num;
        else Count++;
    }

    if(p == "i++")
    {
        if(x != num)
            x = num, x++;
        else
            Count++, x++;
    }

    if(p == "i--")
    {
        if(x != num)
            x = num, x--;
        else
            Count++, x--;
    }

    if(p == "--i")
    {
        if(--x != num)
            x = num;
        else
            Count++;
    }

    if(p == "i")
    {
        if(x == num)
            Count++;
        else
            x = num;
    }

    for(int i = 1; i < N; i++)
    {
        cin >> p >> num;
        if(p == "++i")
        {
            if(++x != num)
                x = num;
            else Count++;
        }

        if(p == "i++")
        {
            if(x != num)
                x = num, x++;
            else
                Count++, x++;
        }

        if(p == "i--")
        {
            if(x != num)
                x = num, x--;
            else
                Count++, x--;
        }
        if(p == "--i")
        {
            if(--x != num)
                x = num;
            else Count++;
        }

        if(p == "i")
        {
            if(x == num)
                Count++;
            else
                x = num;
        }

    }
    cout << Count << endl;
}

int main()
{
    string str;
    LL N;
    while(cin >> str >> N and !(str == "0" and N == 0))
    {
        LL x;
        if(str[0] != '0')
            x = Func1(str);
        else if(str[0] == '0' and str[1] != 'x')
            x = Func2(str);
        else if(str[0] == '0' and str[1] == 'x')
            x = Func3(str);

        solve(x, N);
    }
    return 0;
}

