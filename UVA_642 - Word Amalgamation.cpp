#include "bits/stdc++.h"
using namespace std;
#define LL long long int

main()
{
    vector <string> Dict;
    string str;
    while(cin >> str && str != "XXXXXX")
        Dict.push_back(str);
    sort(Dict.begin(), Dict.end());

    string word;
    while(cin >> word && word != "XXXXXX")
    {
        sort(word.begin(), word.end());
        bool flag = false;
        for(int i = 0; i < Dict.size(); i++)
        {
            string temp = Dict[i];
            sort(temp.begin(), temp.end());
            if(word == temp)
            {
                cout << Dict[i] << endl;
                flag = true;
            }
        }
        if(flag == false)
            cout << "NOT A VALID WORD\n";
        printf("******\n");
    }
    return 0;
}

