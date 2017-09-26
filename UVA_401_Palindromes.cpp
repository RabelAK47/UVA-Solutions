#include "bits/stdc++.h"
using namespace std;

bool pallindrome(string str)
{
    for(int i = 0; i < str.length()/2; i++)
    {
        if(str[i] != str[str.length()-i-1])
            return false;
    }
    return true;
}

bool mirror(string str, map<char,char> M)
{
    for(int i = 0; i < str.length()/2 + str.length() % 2 ; i++)
    {
        if(M[str[i]] != str[str.length()-i-1])
            return false;
    }
    return true;
}

int main()
{
    string str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string str2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

    map<char,char>M;
    for(int i = 0; i < str1.length(); i++)
    {
        M[str1[i]] = str2[i];
    }
    string str;

    while(cin >> str)
    {
        if(pallindrome(str) == false && mirror(str,M) == false)
            cout << str << " -- is not a palindrome." << endl << endl;
        else if(pallindrome(str) == true && mirror(str,M) == false)
            cout << str << " -- is a regular palindrome." << endl << endl;
        else if(pallindrome(str) == false && mirror(str,M) == true)
            cout << str << " -- is a mirrored string." << endl << endl;
        else if(pallindrome(str) == true && mirror(str,M) == true)
            cout << str << " -- is a mirrored palindrome." << endl << endl;
    }
}
