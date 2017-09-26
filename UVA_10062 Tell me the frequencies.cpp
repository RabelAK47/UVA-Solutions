#include "bits/stdc++.h"
using namespace std;

int comp(pair<int, int> a, pair<int, int> b)
{
    if(a.second < b.second) return 1;
    if(a.second > b.second) return 0;
    return a.first > b.first;
}
int main()
{
    string str;
    bool newline = false;
    while(getline(cin,str))
    {
        if(newline == true)
            cout << endl;
        newline = true;

        map <int, int> Mp;
        map <int, int> :: iterator it;
        for(int i = 0; i < str.length(); i++)
        {
            Mp[toascii(str[i])]++;
        }
        vector<pair<int,int> > order;
        for(it = Mp.begin(); it != Mp.end(); ++it)
        {
            order.push_back(make_pair(it->first,it->second));
        }
        sort(order.begin(),order.end(), comp);
        for(int i = 0; i < order.size(); i++)
        {
            cout << order[i].first << ' ' << order[i].second << endl;
        }
    }
    return 0;
}
