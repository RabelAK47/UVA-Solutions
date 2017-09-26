#include "bits/stdc++.h"
#define LL long long int
using namespace std;

int Case = 1;

void printHeader()
{
    printf("Case %d:\n", Case++);
    printf("#include<string.h>\n");
    printf("#include<stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
}

void printInput(string str)
{
    printf("printf(\"");
    for(int i = 0; i < str.size(); i++)
    {
        if(isalnum(str[i]) || isspace(str[i]))
            cout << str[i];
        else if(str[i] == '\"')
            printf("\\\"");
        else if(str[i] == '\'')
            printf("\\\'");
        else if(str[i] == '\\')
            printf("\\\\");
    }
    printf("\\n\");\n");
}

void printFooter()
{
    printf("printf(\"\\n\");\n");
    printf("return 0;\n");
    printf("}\n");
}

main()
{
    LL N;
    while(cin >> N && N)
    {
        vector <string> V;
        cin.ignore();
        for(int i = 0; i < N; i++)
        {
            string str;
            getline(cin,str);
            V.push_back(str);
        }

        printHeader();

        for(int i = 0; i < V.size(); i++)
            printInput( V[i] );

        printFooter();
    }
    return 0;
}
