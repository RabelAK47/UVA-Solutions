import java.util.Scanner;
import java.util.Calendar;

public class Main
{
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);

        Calendar cal = Calendar.getInstance();

        while(cin.hasNext())
        {
            int N = cin.nextInt();
            int D = cin.nextInt();
            int M = cin.nextInt();
            int Y = cin.nextInt();
            if(N == 0 && D == 0 && M == 0 && Y == 0) break;

            M -= 1;
            cal.set(Y,M,D); // Set my own Calendar
        //  2999 12 31

            cal.add(Calendar.DAY_OF_YEAR, N);

            int ansD = cal.get(Calendar.DAY_OF_MONTH);
            int ansM = cal.get(Calendar.MONTH);
            int ansY = cal.get(Calendar.YEAR);

            System.out.printf("%d %d %d\n",ansD, ansM + 1, ansY);
        }
    }

}
