#include "bits/stdc++.h"
using namespace std;
#define LL long long int

int main()
{
    vector <string> SevenDay;
    SevenDay.push_back("SUN");
    SevenDay.push_back("MON");
    SevenDay.push_back("TUE");
    SevenDay.push_back("WED");
    SevenDay.push_back("THU");
    SevenDay.push_back("FRI");
    SevenDay.push_back("SAT");

    vector <string> Month;
    //31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 and 31
    LL T;
    cin >> T;
    while(T--)
    {
        string M, D;
        cin >> M >> D;

        LL temp, temp2;
        if(M == "FEB")
            temp = 28;
        else if(M ==  "JAN" || M == "MAR" || M == "MAY" || M == "AUG" || M == "JUL" || M == "OCT" || M == "DEC")
            temp = 31;
        else if(M == "APR" || M == "SEP" || M == "JUN" || M == "NOV")
            temp = 30;

        if(D == "SUN")
            temp2 = 0;
        else if(D == "MON")
            temp2 = 1;
        else if(D == "TUE")
            temp2 = 2;
        else if(D == "WED")
            temp2 = 3;
        else if(D == "THU")
            temp2 = 4;
        else if(D == "FRI")
            temp2 = 5;
        else if(D == "SAT")
            temp2 = 6;

        LL Count = 0;
        for(int i = 0; i < temp; i++)
        {
            if(SevenDay[temp2] == "SAT" || SevenDay[temp2] == "FRI")
            {
                Count++;
            }
            if(temp2 == 6) temp2 = 0;
            else
                temp2++;
        }
        cout << Count << endl;
    }
    return 0;
}
