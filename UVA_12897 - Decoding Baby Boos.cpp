#include "bits/stdc++.h"
using namespace std;
#define LL long long int
int Arr[55];

int main()
{
    // Out;

//    int Arr[55];
    LL T;
    cin >> T;
    cin.ignore();

    while(T--)
    {
        string str;
        cin >> str;
        for(int i = 'A'; i <= 'Z'; i++)
        {
            Arr[i] = i;
        }
        LL N;
        cin >> N;

        for(int i = 0; i < N; i++)
        {
            char ch1, ch2;
            cin >> ch1 >> ch2;

//            temp1 = (int) ch1;
//            temp2 = (int) ch2;
            for(int j = 'A'; j <= 'Z'; j++)
            {
//                int temp1 = (int) ch1;
//                int temp2 = (int) ch2;
                if((int) ch2 == Arr[j])
                {
                    Arr[j] = (int) ch1;
                }
            }
//            cin.ignore();
        }

        for(int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                cout << (char) Arr[str[i]];
            }
            else
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
