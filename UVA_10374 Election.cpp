#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        scanf("%d\n", &N);
        map <string, string> M;
        map <string, string> :: iterator it;
        for(int i = 0; i < N; i++)
        {
            string str1, str2;
            getline(cin, str1);
            getline(cin, str2);
            M[str1] = str2;
        }
        int K;
        scanf("%d\n", &K);
        map <string, int> M2;
        map <string, int> :: iterator it2;
        for(int i = 0; i < K; i++)
        {
            string str3;
            getline(cin,str3);
                M2[str3]++;
        }
        vector <int> V;
        for(it2 = M2.begin(); it2 != M2.end(); ++it2)
            V.push_back(it2->second);

        sort(V.begin(),V.end());
        int maxi = V[V.size()-1], Count  =0;
        for(int i = V.size()-1; i >= 0; i--)
        {
            if(maxi == V[i])
                Count++;
            if(Count >= 2)
                break;
        }
        if(Count >= 2)
        {
            cout << "tie" << endl << endl;
            continue;
        }
        bool flag = false;
        string temp;
        while(maxi > 0)
        {
            for(it2 = M2.begin(); it2 != M2.end(); ++it2)
            {
                if(it2->second == maxi)
                {
                    temp = it2->first;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
            maxi--;
        }
        cout << M[temp] << endl;
        if(T)
            cout << endl;
    }
    return 0;
}


//struct myStruct
//{
//    int Sum;
//    string name;
//    string Party;
//};
//
//bool cmp(myStruct a, myStruct b)
//{
//    return a.Sum < b.Sum ? 0 : 1;
//}
//
//main()
//{
//    //write();
//    int T;
//    cin >> T;
//    while(T--)
//    {
//        int N;
//        scanf("%d\n", &N);
//        myStruct Ara[N+5];
//        for(int i = 0; i < N; i++)
//            Ara[i].Sum = 0;
//
//        for(int i = 0; i < N; i++)
//        {
//            getline(cin, Ara[i].name);
//            getline(cin, Ara[i].Party);
//        }
//
//        int K;
//        scanf("%d\n", &K);
//        for(int i = 0; i < K; i++)
//        {
//            string str;
//            getline(cin,str);
//            for(int j = 0; j < N; j++)
//            {
//                if(Ara[j].name == str)
//                {
//                    Ara[j].Sum++;
//                }
//            }
//        }
//
//        sort(&Ara[0], &Ara[N], cmp); // Opps Cute :D
//
//        if(Ara[0].Sum == Ara[1].Sum)
//        {
//            cout << "tie\n\n";
//            continue;
//        }
//
//        for(int i = 0; i < N; i++)
//        {
//            if(Ara[i].Sum == Ara[0].Sum)
//            {
//                cout << Ara[i].Party << endl;
//                break;
//            }
//        }
//
//        if(T)
//            cout << endl;
//    }
//    return 0;
//}


/*
1
3
Marilyn Manson
Rhinoceros
Jane Doe
Family Coalition
John Smith
independent
6
John Smith
Marilyn Manson
Marilyn Manson
Jane Doe
John Smith
Marilyn Manson
*/
