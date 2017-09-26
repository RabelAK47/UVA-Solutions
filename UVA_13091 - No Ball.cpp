#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, Case = 1;
	scanf("%d", &T);
	while(T-- > 0)
	{
		int br, ln;
		char ch;
		for(int i = 0; i < 5; i++)
		{
			string str;
			cin >> str;
			for(int j = 0; j < 5; j++)
			{
				if(str[j] == '>' or str[j] == '<')
					br = j, ch = str[j];
				if(str[j] == '|')
					ln = j;
			}
		}
		string str;
		if(ch == '>')
		{
			if(ln > br)
				str = "Thik Ball";
			else
				str = "No Ball";
		}
		else if(ch == '<')
		{
			if(ln < br)
				str = "Thik Ball";
			else
				str = "No Ball";
		}
		str = ": " + str;
		cout << "Case " << Case++ << str << endl;
	}
	return 0;
}
