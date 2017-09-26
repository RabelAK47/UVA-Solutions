#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == ']')
            {
                str[i] = 'p';
            }
            else if(str[i] == '[')
            {
                str[i] = 'o';
            }
            else if(str[i] == 'p' || str[i]=='P')
            {
                str[i] = 'i';
            }
            else if(str[i] == 'o' || str[i] == 'O')
            {
                str[i] = 'u';
            }
            else if(str[i] == 'i' || str[i]== 'I')
            {
                str[i] = 'y';
            }
            else if(str[i] == 'u' || str[i] == 'U')
            {
                str[i] = 't';
            }
            else if(str[i] == 'y' || str[i] == 'Y')
            {
                str[i] = 'r';
            }
            else if(str[i] == 't' || str[i] == 'T')
            {
                str[i] = 'e';
            }
            else if(str[i] == 'r' || str[i] == 'R')
            {
                str[i] = 'w';
            }
            else if(str[i] == 'e' || str[i] == 'E')
            {
                str[i] = 'q';
            }
            else if(str[i]=='\'')
            {
                str[i] = 'l';
            }
            else if(str[i] == ';')
            {
                str[i] = 'k';
            }
            else if(str[i] == 'l' || str[i] == 'L')
            {
                str[i] = 'j';
            }
            else if(str[i] == 'k' || str[i] == 'K')
            {
                str[i] = 'h';
            }
            else if(str[i] == 'j' || str[i] == 'J')
            {
                str[i] = 'g';
            }
            else if(str[i] == 'h' || str[i] == 'H')
            {
                str[i] = 'f';
            }
             else if(str[i] == 'g' || str[i] == 'G')
            {
                str[i] = 'd';
            }
             else if(str[i] == 'f' || str[i] == 'F')
            {
                str[i] = 's';
            }
             else if(str[i] == 'd' || str[i] == 'D')
            {
                str[i] = 'a';
            }
            else if(str[i] == '/')
            {
                    str[i] = ',';
            }
            else if(str[i] == '.')
            {
                    str[i] = 'm';
            }
            else if(str[i] == ',')
            {
                    str[i] = 'n';
            }
            else if(str[i] == 'm' || str[i] == 'M')
            {
                str[i] = 'b';
            }
            else if(str[i] == 'n' || str[i] == 'N')
            {
                str[i] = 'v';
            }
              else if(str[i] == 'b' || str[i] == 'B')
            {
                str[i] = 'c';
            }
              else if(str[i] == 'v' || str[i] == 'V')
            {
                str[i] = 'x';
            }
            else if(str[i] == 'c' || str[i] == 'C')
            {
                str[i] = 'z';
            }
            else if(str[i] == '=')
            {
                str[i] = '0';
            }
            else if(str[i] == '-')
            {
                str[i] = '9';
            }
            else if(str[i] == '0')
            {
                str[i] = '8';
            }
            else if(str[i] == '9')
            {
                str[i] = '7';
            }
            else if(str[i] == '8')
            {
                str[i]='6';
            }
            else if(str[i] == '7')
            {
                str[i] = '5';
            }
            else if(str[i]=='6')
            {
                str[i]='4';
            }
            else if(str[i] == '5')
            {
                str[i] = '3';
            }
            else if(str[i]=='4')
            {
                str[i] = '2';
            }
            else if(str[i] == '3')
            {
                str[i] = '1';
            }
            else if(str[i] == '2')
            {
                str[i]='`';
            }
        }
        cout << str << endl;
    }
}
