#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str, strF;
    int maxi = 0;
    while(cin >> str)
    {
        if(str == "E-N-D")
            break;
        string str2;
        for(int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]) || str[i] == '-')
            {
                str2 += str[i];
            }
        }
        if(str2.length() > maxi)
        {
            maxi = str2.length();
            strF = str2;
        }
    }

    for(int i = 0; i < strF.length(); i++)
    {
        strF[i] = tolower(strF[i]);
        cout << strF[i];
    }
    cout << endl;
    return 0;
}
/*
//solved using stl;
#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str;
    map <string, int> Mp;
    map <string, int> :: iterator it;
    priority_queue <int> PQ;
    vector <string> V;

    while(cin >> str && str != "E-N-D")
    {
        string str2;
        for(int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]) || str[i] == '-')
                str2 += str[i];
        }
        Mp[str2] = str2.length();
        PQ.push(str2.length());
        V.push_back(str2);
    }
    bool flag = false;
    for(int i = 0; i < V.size(); i++)
    {
        for(it = Mp.begin(); it != Mp.end(); ++it)
        {
            if(it->first == V[i] && it->second == PQ.top())
            {
                str = V[i];
                for(int k = 0; k < str.length(); k++)
                {
                    if(isupper(str[k]))
                    str[k] = tolower(str[k]);
                    cout << str[k];
                }
                cout << endl;
                flag = true;
                break;
            }
        }
        if(flag == true)
            break;
    }
}

*/
