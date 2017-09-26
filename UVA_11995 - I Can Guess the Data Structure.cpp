#include "iostream"
#include "algorithm"
#include "vector"
#include "set"
#include "map"
#include "list"
#include "stack"
#include "queue"
#include "string"
#include "bits/stdc++.h"
#define LL long long int
using namespace std;

int main()
{
    int N;
    while(cin >> N)
    {
        stack <int> St;
        queue <int> Q;
        priority_queue <int> PQ;
        bool s_t = true, q_q = true,  p_q = true;

        for(int i = 0; i < N; i++)
        {
            int option, value;
            cin >> option >> value;
            if(option == 1)
            {
                if(s_t == true) St.push(value);
                if(q_q == true) Q.push(value);
                if(p_q == true) PQ.push(value);
            }
            else
            {
                if(s_t == true)
                {
                    if(St.empty() == false && St.top() == value) St.pop();
                    else s_t = false;
                }
                if(q_q == true)
                {
                    if(Q.empty() == false && Q.front() == value) Q.pop();
                    else q_q = false;
                }
                if(p_q == true)
                {
                    if(PQ.empty() == false && PQ.top() == value) PQ.pop();
                    else p_q = false;
                }
            }
        }
        if(s_t == true && q_q == false && p_q == false) cout << "stack" << endl;
        else if(s_t == false && q_q == true && p_q == false) cout << "queue" << endl;
        else if(s_t == false && q_q == false && p_q == true) cout << "priority queue" << endl;
        else if(s_t == true || q_q == true || p_q == true) cout << "not sure" << endl;
        else cout << "impossible" << endl;
    }
    return 0;
}
