#include <bits/stdc++.h>
using namespace std;

int pTwo(int N)
{
    int T[] = {6, 2, 4, 8};
    if(N == 0)
        return 1;
    else
        return T[N%4];
}
int LastNZDigit(int N)
{
    int A[] = {1, 1, 2, 6,4};
    if(N < 5)
        return A[N];
    else
        return (pTwo(N/5) * LastNZDigit(N/5) * LastNZDigit(N%5)) % 10;
}
int main()
{
    int N;
    while(cin >> N)
    {
        printf("%5d -> ",N);
        cout << LastNZDigit(N) << endl;
    }
    return 0;
}


///::::::::::::BigInteger:::////

import java.math.BigInteger;
import java.util.Scanner;

public class Main
{

   public static void main(String[] args)
   {
       Scanner cin = new Scanner(System.in);

       while(cin.hasNext())
       {
           int N = cin.nextInt();
           String fact = factorial(N);
          char ch = fact.charAt(0);
          for(int i = fact.length() -1 ; i >= 0; i--)
          {
             if(fact.charAt(i) != '0')
             {
                 ch = fact.charAt(i);
                 break;
              }
           }
       System.out.printf("%5d -> %c\n",N,ch);
      }

   }
   public static String factorial(int N)
   {
       BigInteger fact = BigInteger.ONE;
       for (int i = 1; i <= N; i++)
       {
           fact = fact.multiply(BigInteger.valueOf(i));
       }
       return fact.toString();
   }

}
