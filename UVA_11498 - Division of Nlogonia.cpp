#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    for(int i = 0; ; )
    {
        cin >> N;
        if(N == 0)
            break;
        int PX, PY;
        cin >> PX >> PY;
        for(int i = 0; i < N; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x == PX || y == PY)
				cout << "divisa" << endl;
			else if (x < PX && y > PY)
				cout << "NO" << endl;
			else if (x > PX && y > PY)
				cout << "NE" << endl;
			else if (x > PX && y < PY)
				cout << "SE" << endl;
			else if (x < PX && y < PY)
				cout << "SO" << endl;
        }
    }
    return 0;
}
