import java.math.BigInteger;
import java.util.Scanner;
public class Main
{
	public static void main(String[]args)
	{
		Scanner input = new Scanner(System.in);
		while(input.hasNext())
		{
			BigInteger B1, B2, B3;
//		System.out.println("Hi AK47");
			B1 = input.nextBigInteger();
			B2 = input.nextBigInteger();
			B3 = B1.multiply(B2);
			System.out.println(B3);
		}
	}
}
