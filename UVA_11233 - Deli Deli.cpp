#include <bits/stdc++.h>
using namespace std;

string str1[100], str2[100], str3;

int main()
{
    int N, T, flag;
    while(cin >> N >> T)
    {
        int i = 0;
        for(int i = 0; i<N ; i++)
        {
            cin >> str1[i] >> str2[i];
        }
        for(int j = 0; j<T; j++)
        {
            cin >> str3;
            flag = 0;
            for(int i = 0; i<N; i++)
            {
                if(str3 == str1[i])
                {
                    cout << str2[i] << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                int len = str3.length();
                if((str3[len-1] == 'y') && (str3[len-2] != 'a' && str3[len-2] != 'e' && str3[len-2] != 'i' && str3[len-2] != 'o' && str3[len-2] != 'u'))
                {
                    str3.replace(len-1, 3, "ies");
                    cout << str3 << endl;
                }
                else if(str3[len-1] == 'o' || str3[len-1] == 's' || str3[len-1] =='x' || (str3[len-1]  == 'h' && str3[len-2]  == 's') || (str3[len-1] == 'h' && str3[len-2] == 'c'))
                {
                    cout << str3 << "es"<< endl;
                }
                else
                {
                    cout << str3 << "s" << endl;
                }
            }
        }
    }
    return 0;
}
