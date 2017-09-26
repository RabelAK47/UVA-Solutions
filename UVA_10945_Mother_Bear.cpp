#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    char A[100] , B[100], C[100];
    int i , j , len ;
    while(gets(A))
    {
        if(strcmp(A,"DONE")==0)
        {
           return 0;
        }
        j = 0;
        for(i = 0; i < strlen(A); i++)
        {
            if(A[i] >= 'A' && A[i] <= 'Z')
            {
                B[j] = tolower(A[i]);
                j++;
            }
            else if (A[i]>='a' && A[i] <='z')
            {
                B[j] = tolower(A[i]);
                j++;
            }
        }
        B[j] = A[i];
        strcpy(C,B);
        if(strcmp(strrev(B),C)==0)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }
    return 0;
}
