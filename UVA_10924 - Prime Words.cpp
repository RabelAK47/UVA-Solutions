#include <bits/stdc++.h>
#define max 1000000
using namespace std;
int a[max];

void seive()
{
    int i,j,lim;
    for(i=1; i<=max; i++)
    {
        a[i]=1;
    }
    lim=int (sqrt(max));

    for(i=2; i<=lim; i++)
    {
        if(a[i]==1)
        {
            for(j=i+i; j<=max; j=j+i)
            {
                a[j]=0;
            }
        }
    }
}
int main()
{
    ofstream myfile;
    myfile.open("Test Output.txt");

    seive();
    string str;
    while(cin>>str)
    {
        int Sum = 0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == 'a')
                Sum = Sum + 1;
                else if(str[i] == 'b')
                Sum = Sum + 2;
                else if(str[i] == 'c')
                Sum = Sum + 3;
                else if(str[i] == 'd')
                Sum = Sum + 4;
                else if(str[i] == 'e')
                Sum = Sum + 5;
                else if(str[i] == 'f')
                Sum = Sum + 6;
                else if(str[i] == 'g')
                Sum = Sum + 7;
                else if(str[i] == 'h')
                Sum = Sum + 8;
                else if(str[i] == 'i')
                Sum = Sum + 9;
                else if(str[i] == 'j')
                Sum = Sum + 10;
                else if(str[i] == 'k')
                Sum = Sum + 11;
                else if(str[i] == 'l')
                Sum = Sum + 12;
                else if(str[i] == 'm')
                Sum = Sum + 13;
                else if(str[i] == 'n')
                Sum = Sum + 14;
                else if(str[i] == 'o')
                Sum = Sum + 15;
                else if(str[i] == 'p')
                Sum = Sum + 16;
                else if(str[i] == 'q')
                Sum = Sum + 17;
                else if(str[i] == 'r')
                Sum = Sum + 18;
                else if(str[i] == 's')
                Sum = Sum + 19;
                else if(str[i] == 't')
                Sum = Sum + 20;
                else if(str[i] == 'u')
                Sum = Sum + 21;
                else if(str[i] == 'v')
                Sum = Sum + 22;
                else if(str[i] == 'w')
                Sum = Sum + 23;
                else if(str[i] == 'x')
                Sum = Sum + 24;
                else if(str[i] == 'y')
                Sum = Sum + 25;
                else if(str[i] == 'z')
                Sum = Sum + 26;
                else if(str[i] == 'A')
                Sum = Sum + 27;
            else if(str[i] == 'B')
                Sum = Sum + 28;
                else if(str[i] == 'C')
                Sum = Sum + 29;
                else if(str[i] == 'D')
                Sum = Sum + 30;
                else if(str[i] == 'E')
                Sum = Sum + 31;
                else if(str[i] == 'F')
                Sum = Sum + 32;
                else if(str[i] == 'G')
                Sum = Sum + 33;
                else if(str[i] == 'H')
                Sum = Sum + 34;
                else if(str[i] == 'I')
                Sum = Sum + 35;
                else if(str[i] == 'J')
                Sum = Sum + 36;
                else if(str[i] == 'K')
                Sum = Sum + 37;
                else if(str[i] == 'L')
                Sum = Sum + 38;
                else if(str[i] == 'M')
                Sum = Sum + 39;
                else if(str[i] == 'N')
                Sum = Sum + 40;
                else if(str[i] == 'O')
                Sum = Sum + 41;
                else if(str[i] == 'P')
                Sum = Sum + 42;
                else if(str[i] == 'Q')
                Sum = Sum + 43;
                else if(str[i] == 'R')
                Sum = Sum + 44;
                else if(str[i] == 'S')
                Sum = Sum + 45;
                else if(str[i] == 'T')
                Sum = Sum + 46;
                else if(str[i] == 'U')
                Sum = Sum + 47;
                else if(str[i] == 'V')
                Sum = Sum + 48;
                else if(str[i] == 'W')
                Sum = Sum + 49;
                else if(str[i] == 'X')
                Sum = Sum + 50;
                else if(str[i] == 'Y')
                Sum = Sum + 51;
                else if(str[i] == 'Z')
                Sum = Sum + 52;
        }
        if(a[Sum]==1)
        {
            cout << "It is a prime word." << endl;
            myfile<<"It is a prime word." << endl;

        }
        else
        {
            cout << "It is not a prime word." << endl;
            myfile << "It is not a prime word." << endl;
        }
    }
    myfile.close();
    return 0;
}
