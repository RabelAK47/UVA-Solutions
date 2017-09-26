#include "bits/stdc++.h"
using namespace  std;

bool Distinct_Digit(int Number)
{
    string Result;
    ostringstream convert;
    convert << Number;
    Result = convert.str();
    int Count = 0;
    for(int i = 0; i < Result.length() - 1; i++)
    {
        for(int j = i+1; j < Result.length(); j++)
        {
            if(Result[i] == Result[j])
                return false;
        }
    }

    return true;
}
int main()
{
    long int N, M;

    while(cin >> N >> M)
    {
        long int Count = 0;
        for(int i = N; i <= M; i++)
        {
            if(Distinct_Digit(i) == true)
            {
                Count++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}
