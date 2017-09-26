#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;

map <string, LL> Mp;
string str[31] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety",
                "hundred","thousand", "million"};
void Set()
{
    LL Count = 0;
    for(int i = 0; Count <= 28; Count++)
    {
        if(i <= 20)
        {
            Mp[str[i]] = i;
            i++;
            if(i > 20)
                i = 30;
        }
        else if(i >= 30)
        {
            Mp[str[Count]] = i;
            i += 10;
        }
    }
    Mp[str[Count++]] = 1000;
    Mp[str[Count++]] = 1000000;
}
main()
{
    Set();
    string line;
    while(getline(cin, line))
    {
        bool neg = false;
        stringstream is(line);
        string word;
        LL num = 0, total = 0;

        while(is >> word)
        {
            if(word == "negative")
                neg = true;

            if(word == "million")
                total += num * Mp["million"], num = 0;

            else if(word == "thousand")
                total += num * Mp["thousand"], num = 0;

            else if(word == "hundred")
                num *= Mp["hundred"];

            else
                num += Mp[word];
        }

        total += num;
        neg == true ? printf("%lld\n", -total) : printf("%lld\n", total);
    }
    return 0;
}
