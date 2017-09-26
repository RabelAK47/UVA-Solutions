import java.math.BigInteger;
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class First
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		BigInteger[] F ;
		F = Fibo(5500);
		while(input.hasNext())
		{
			int N;
			N = input.nextInt();
			System.out.printf("The Fibonacci number for %d is %d\n",N,F[N]);
		}
	}
	public static BigInteger[] Fibo(int N)
	{
		BigInteger[] F = new BigInteger[N+1];
		F[0] = BigInteger.ZERO;
		F[1] = BigInteger.ONE;
		for(int i = 2; i <= N; i++)
		{
			F[i] = F[i-1].add(F[i-2]);
		}
		return F;
 	}
}
