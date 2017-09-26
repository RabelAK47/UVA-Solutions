#include <bits/stdc++.h>
using namespace std;

int A[35], B[35],ans, len, sum;

void MagicBox(int position, int require)
{
    if(position == len || require == sum)
    {
        if(sum == require)
        {
            ans = 1;
            return ;
        }
        return;
    }
    MagicBox(position+1, require+A[position]);
    MagicBox(position+1, require);
}

int main()
{
    int N, Case = 0, temp ;
    while(cin >> N)
    {
        Case++;
        temp = 0;
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
            B[i] = A[i];
        }
        cout << "Case #" << Case << ":";
        for(int i = 0; i < N; i++)
        {
            cout << " " << A[i];
        }
        cout << endl;
        sort(B,B+N);
        for(int i = 0; i < N; i++)
        {
            if(A[i]!=B[i])
            {
                temp = 1;
                break;
            }
        }
        if(temp == 1)
        {
            cout << "This is not an A-sequence." << endl;
        }
        else
        {
            int Count = 0;
            for(int i = 1; i < N; i++)
            {
                ans = 0,len = i, sum = A[i];
                MagicBox(0,0);
                if(ans == 1)
                {
                    Count = 1;
                    break;
                }
            }
            if(Count == 1)
                cout << "This is not an A-sequence." << endl;
            else
                cout << "This is an A-sequence." << endl;
        }
    }
    return 0;
}
