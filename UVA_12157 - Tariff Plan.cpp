//*
//  __________                        ___      \\ ___           __ __ _ _ .    \_
//   \ ______     \               ___|  _/      ||           \\    ||__ _ _ /       ||
//    |                _/          /    __   |          ||         //.      ||_ _ _ .         ||
//    |          |       \        /   /_/    |          ||           \\.    ||__ _ _ _      ||_ _ _ _
//    |_____|_      /    // _____   |         ||  ___  //     ||___ _  /       ||_______\
//                    \ /     \ /            \ /         \ /               \ /                                  \ /
//*/

#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include "vector"
#include "stack"
#include "queue"
#include "stdlib.h"
#include "math.h"
#include "iterator"
#include "bits/stdc++.h"
using namespace std;

int Duration[50];
void TarrifPlan(int Range, int Case)
{
    int Mile, Juice, Mile_Sum = 0, Juice_Sum = 0;
    for(int i = 0; i < Range; i++)
    {
        Mile = (Duration[i]/30) + 1;
        Mile *= 10;
        Mile_Sum += Mile;
        Juice = (Duration[i]/60) + 1;
        Juice *= 15;
        Juice_Sum += Juice;
    }
    if(Mile_Sum < Juice_Sum)
        cout << "Case " << Case << ": Mile " << Mile_Sum << endl;
    else if(Mile_Sum > Juice_Sum)
        cout << "Case " << Case << ": Juice " << Juice_Sum << endl;
    else
        cout << "Case " << Case << ": Mile Juice " << Juice_Sum << endl;
}
int main()
{
    int T, Case = 0;
    cin >> T;
    while(T--)
    {
        int Range;
        Case++;
        cin >> Range;
        for(int i = 0; i < Range; i++)
        {
            cin >> Duration[i];
        }
        TarrifPlan(Range, Case);
    }
    return 0;
}

