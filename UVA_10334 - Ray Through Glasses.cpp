#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
//long int F[MAX];
long int F[100000000];
void Fibo()
{
    F[0] = 1;
    F[1] = 2;
    for(int i = 2; i <= 100000; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
    return;
}
//int Fibo(int N)
//{
//    long int Sum = 0;
//   // int N = MAX;
//    F[0] = 0;
//    F[1] = 1;
//    for(int i = 2; i <= N; i++)
//    {
//        F[i] = F[i-1] + F[i-2];
//        Sum += F[i];
//    }
//    return Sum+2;
//}

int main()
{
    long int N;
    //////JAVA
    Fibo();
    while(cin >> N)
    {
        ////JAVA
        cout << F[N] << endl;
    }
    return 0;
}
