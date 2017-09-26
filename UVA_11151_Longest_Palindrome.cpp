#include <bits/stdc++.h>
using namespace std;
#define LL long long int

/*
void printSubStr( string str, int low, int high )
{
    for( int i = low; i <= high; ++i )
        printf("%c", str[i]);
}

void longestPalSubstr( string str )
{
    LL n = str.length();

    bool table[n][n];
    memset(table, 0, sizeof(table));

    // All substrings of length 1 are palindromes
    LL maxLength = 1;
    for (int i = 0; i < n; ++i)
        table[i][i] = true;

    // check for sub-string of length 2.
    int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (str[i] == str[i+1])
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }


    for (int k = 3; k <= n; ++k)
    {
        for (int i = 0; i < n-k+1 ; ++i)
        {
            // Get the ending index of substring from starting index i and length k
            int j = i + k - 1;
            // checking for sub-string from ith index to jth index
            //iff str[i+1] to str[j-1] is a palindrome

            if (table[i+1][j-1] == true && str[i] == str[j])
            {
                table[i][j] = true;
                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }

//    printf("Longest palindrome substring is: ");
//    printSubStr( str, start, start + maxLength - 1 );

    printf("%lld\n",maxLength);
    return;
}
*/


int main()
{
    // Wrong Ans //
    LL T;
    scanf("%lld", &T);
    while(T-- > 0)
    {
        string str;
        cin >> str;
        longestPalSubstr( str );
    }
    return 0;
}
