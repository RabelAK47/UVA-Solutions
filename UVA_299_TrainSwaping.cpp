#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void bubble(int data[], int N)
{
    int k, ptr, temp;
    int Count=0;
    for(k=1; k<=N-1; k++)
    {
        ptr = 1;
        while (ptr <= N-k)
        {
            if (data[ptr] > data[ ptr +1 ])
            {
                temp = data [ptr];
                data [ptr] = data[ptr+1];
                data [ptr+1] = temp;
                Count++;
            }
            ptr = ptr + 1;
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",Count);
    return;
}
int main()
{
    int i, N, T,data[1000];
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(i=1; i<=N; i++)
            {
                cin>>data[i];
            }
            bubble(data, N);
    }
    return 0;
}

