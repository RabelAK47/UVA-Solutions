import java.math.BigInteger;
import java.util.Scanner;
public class First
{
	public static void main(String[]args)
	{
		int Case = 1;
		Scanner input = new Scanner(System.in);
		while(true)
		{
			int N, F;
			BigInteger V, B;
			BigInteger Sum = BigInteger.ZERO;
			N = input.nextInt();
			F = input.nextInt();
			if(N == 0 && F == 0)
				break;
			for(int i = 0; i < N; i++)
			{
				V = input.nextBigInteger();
				Sum = Sum.add(V);
			}
			BigInteger ans = Sum.divide(BigInteger.valueOf(F));

			System.out.println("Bill #" + (Case++) + " costs " + Sum + ": each friend should pay " + ans);
			System.out.println();
		}
	}
}
