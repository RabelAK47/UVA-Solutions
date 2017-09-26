#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Case = 0;
    for(int N; cin >> N && N;)
    {
        Case++;
        double A, B, C;
        cin >> A >> B >> C;
        if(N == 1)
        {
                double U = A, V = B, T = C;
                double S, Acee;
                Acee = (V-U)/T;
                S = U*T + 0.5*Acee*pow(T,2);
                printf("Case %d: %.3lf %.3lf\n", Case, S, Acee);
//                cout << S << " " << Acee << endl;
        }
        else if(N == 2)
        {
            double U = A, V = B, Acee = C;
            double S, T;
            T = (V-U)/Acee;
            S = U*T + 0.5*Acee*pow(T,2);
            printf("Case %d: %.3lf %.3lf\n", Case, S, T);
//            cout << S << " " << T << endl;
        }
        else if(N == 3)
        {
            double U = A, Acee = B, S = C;
            double V, T;
            V = U*U + 2 * Acee * S;
            V = sqrt(V);
            T = (V-U)/Acee;
            printf("Case %d: %.3lf %.3lf\n", Case, V, T);
//            cout << V << " " << T << endl;
        }
        else if(N == 4)
        {
            double V = A, Acee = B,  S = C;
            double U, T;
            U = V*V - 2 * Acee * S;
            U = sqrt(U);
            T = (V-U)/Acee;
            printf("Case %d: %.3lf %.3lf\n", Case, U, T);
//            cout << U << " " << T << endl;
        }
    }
    return 0;
}
