#include "bits/stdc++.h"
using namespace std;

int main()
{
    //freopen("WA.txt", "w", stdout);
   int N;
   while(cin >> N)
   {
       vector <int> V;
       for(int i = 0; i < N; i++)
       {
           int temp; cin >> temp; V.push_back(temp);
       }
       sort(V.begin(),V.end());
       int M;
       cin >> M;
       int A, B, mini = INT_MAX;
       for(int i = 0; i < N; i++)
       {
           for(int j = 0; j < N; j++)
           {
               int Sum = V[i]+V[j];
               if(Sum == M)
               {
                   int dif = abs(V[i] - V[j]);
                   if(dif < mini)
                   {
                       A = V[i], B = V[j];
                       mini = dif;
                   }
               }
           }
       }
      cout << "Peter should buy books whose prices are "<< A << " and " << B << ".\n\n";
   }
   return 0;
}
