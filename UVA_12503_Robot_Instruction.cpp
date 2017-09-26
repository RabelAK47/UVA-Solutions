#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, A[105];
    string str;
    cin >> T;
    while(T--)
    {
        int N, Count = 0, j = 1;
        cin >> N;
        getchar();
        for(int i = 1; i <= N; i++)
        {
            getline(cin, str);
            if(str[0] == 'R')
            {
                Count++;
                A[j] = 1;
                j++;
            }
            else if(str[0] == 'L')
            {
                Count--;
                A[j] = -1;
                j++;
            }
            else
            {
                int len = str.length();
                string sub = str.substr(8,len);
                stringstream ss(sub);
                int IN;
                ss >> IN;
                if(A[IN] == 1)
                {
                    Count++;
                    A[j] = 1;
                    j++;
                }
                else if(A[IN] == -1)
                {
                    Count--;
                    A[j] = -1;
                    j++;
                }
            }
        }
        cout << Count << endl;
    }
    return 0;
}
