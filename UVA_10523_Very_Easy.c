import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        int  N, a;

        while(cin.hasNext())
        {
            BigInteger Sum = BigInteger.ZERO; // BigInteger Intial ola kora lage.
            BigInteger A;

            N = cin.nextInt();
            a = cin.nextInt();

            A = BigInteger.valueOf(a); // int re BigInteger a convert;

            for(int  i = 1; i <= N; i++)
            {
               Sum = Sum.add(BigInteger.valueOf(i).multiply(A.pow(i))); // add or multiply . dia kora lage
            }

            System.out.println(Sum);
        }
    }
}
