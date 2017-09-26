#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    while(cin >> T)
    {
        int Count = 0;
        for(int i = 1; i <= 5; i++)
        {
            int temp; cin >> temp;
            if(temp == T)
                Count ++;
        }
        cout << Count << endl;
    }
}
