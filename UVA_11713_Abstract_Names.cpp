#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int flag;
        if(str1.length()!=str2.length())
        {
            cout << "No" << endl;
            continue;
        }
        for(int i=0; i<str1.length(); i++)
        {
            if((str1[i] =='a' || str1[i] =='e' || str1[i] =='i' || str1[i]=='o' || str1[i] =='u') && (str2[i] =='a' || str2[i] =='e' || str2[i] =='i' || str2[i]=='o' || str2[i] =='u'))
            {
                flag = 1;
            }
            else if(str1[i]==str2[i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            cout << "Yes" << endl;
        }
        else if(flag==0)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
