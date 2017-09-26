#include <bits/stdc++.h>
using namespace std;

int main()
{
    char Ch;
    int temp = 1;
    while((Ch = getchar() ) != EOF)
    {
        if(Ch == '"')
        {
            printf("%s", temp ? "``" : "''");
            temp = 0;
        }
        else
            cout << Ch;
    }
    return 0;
}
