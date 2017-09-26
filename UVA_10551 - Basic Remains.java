
import java.math.BigInteger;
import java.util.Scanner;


public class Time
{
    public static void main(String args[])
    {
        Scanner cin = new Scanner(System.in);
        while(cin.hasNext())
        {
            int B = cin.nextInt();
            if(B == 0)
            {
                break;
            }
            BigInteger P = new BigInteger(cin.next(),B);
            BigInteger M = new BigInteger(cin.next(),B);

            System.out.println((P.mod(M)).toString(B));
        }
    }
}
