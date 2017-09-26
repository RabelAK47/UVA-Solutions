#include <bits/stdc++.h>
using namespace std;

int main()
{
    double H, U, D, F;
    while(cin >> H >> U >> D >> F && H)
    {
        double Initial_Hight  = 0;
//        double Distance_Climbed = Initial_Hight + U;
//        double Night = Distance_Climbed - D;
        ///For loop
        int Day = 0, flag = 0;
        double percent = F*(U/ 100);
        while(true)
        {
            Day++;
//            Initial_Hight = Night;
            if(U > 0)
            {
                Initial_Hight += U;
            }
            U -= percent;
            if(Initial_Hight > H)
            {
                flag = 1;
                break;
            }
            Initial_Hight -= D;
            if(Initial_Hight < 0)
            {
                flag = -1;
                break;
            }
        }
        (flag == 1) ? cout << "success on day " << Day << endl : cout << "failure on day " << Day << endl;
    }
    return 0;
}
