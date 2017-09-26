#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    while(cin >> T)
    {
        getchar();
        while(T-- > 0)
        {
            bool F = true;
            stack <char> st;
            string str;
            getline(cin,str);

            if(str.length()== 1 || str.length()%2 != 0)
            {
                printf("No\n");
                continue;
            }

            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] == '(' or str[i] == '[')
                    st.push(str[i]);
                else if(str[i] == ')' and !st.empty() and st.top() == '(')
                    st.pop();
                else if(str[i] == ']' and !st.empty() and st.top() == '[')
                    st.pop();
                else
                    F = false;
            }

            if(st.empty() and F == true)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}

