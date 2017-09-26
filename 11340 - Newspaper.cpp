#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int N; cin >> N;
        map <char, int> Map;
        for(int i = 0; i < N; i++)
        {
            char Ch;
            int temp;
            cin >> Ch >> temp;
            Map[Ch] = temp;
        }

        int K; cin >> K;
        map <char,int> Map2;

        cin.ignore();
        for(int i = 0; i < K; i++)
        {
            string str;
            getline(cin,str);
            for(int j = 0; j < str.length(); j++)
            {
                Map2[str[j]]++;
            }
        }

        map <char,int> :: iterator it1, it2;
        double Sum = 0;
        for(it1 = Map.begin(); it1 != Map.end(); ++it1)
        {
            for( it2 = Map2.begin(); it2 != Map2.end(); ++it2)
            {
                if(it1->first == it2->first)
                    Sum += it1->second * it2->second;
            }
        }

        printf("%0.2lf$\n", Sum/100);
    }
    return 0;
}
