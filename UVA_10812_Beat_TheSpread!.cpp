#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int A, B, Ans1, Ans2, N, T;
	cin>>T;
	while(T--)
	{
		cin>>A>>B;
		if (A>=B && (A+B)%2==0)
		{
			Ans1 = (A+B)/2;
			Ans2 = (A-B)/2; 
			cout<<Ans1<<" "<<Ans2<<endl;
		}
		else  
		{
			cout<<"impossible"<<endl;
		}
		
	}
	return 0;
}