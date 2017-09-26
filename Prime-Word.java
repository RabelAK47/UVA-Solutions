

import java.util.Scanner;
public class Hello
{
    public static void main(String[]args)
    {
        int t = 0;
        boolean [] flag;
        flag = new boolean [100000];
        Scanner input = new Scanner(System.in);
        for(int i = 0; i <= 1000; i++)
        {
            flag[i] = true;
        }
        for(int i = 2; i <= Math.sqrt(1000); i++)
        {
            if(flag[i])
            {
                for(int j = i; j*i <= 10000; j++)
                {
                    flag[i*j] = false;
                }
            }
        }
        String str;
        while(input.hasNext())
        {
            int Sum = 0;
            str = input.nextLine();
            for(int i = 0; i < str.length(); i++)
            {
                char ch = str.charAt(i);
                if(ch == 'a')
                    Sum += 1;
                else if(ch == 'b')
                    Sum+=2;
                else if(ch == 'c')
                    Sum += 3;
                else if(ch == 'd')
                    Sum += 4;
                else if(ch == 'e')
                    Sum += 5;
                else if(ch == 'f')
                    Sum +=6;
                else if(ch == 'g')
                    Sum += 7;
                else if(ch == 'h')
                    Sum += 8;
                else if(ch == 'i')
                    Sum += 9;
                else if(ch == 'j')
                    Sum += 10;
                else if(ch == 'k')
                    Sum += 11;
                else if(ch == 'l')
                    Sum += 12;
                else if(ch == 'm')
                    Sum += 13;
                else if(ch == 'n')
                    Sum += 14;
                else if(ch == 'o')
                    Sum += 15;
                else if(ch == 'p')
                    Sum += 16;
                else if(ch == 'q')
                    Sum += 17;
                else if(ch == 'r')
                    Sum += 18;
                else if(ch == 's')
                    Sum += 19;
                else if(ch == 't')
                    Sum += 20;
                else if(ch == 'u')
                    Sum += 21;
                else if(ch == 'v')
                    Sum += 22;
                else if(ch == 'w')
                    Sum += 23;
                else if(ch == 'x')
                    Sum += 24;
                else if(ch == 'y')
                    Sum  += 25;
                else if(ch == 'z')
                    Sum += 26;

                //Capital letter
                else if(ch == 'A')
                    Sum += 27;
                else if(ch == 'B')
                    Sum+=28;
                else if(ch == 'C')
                    Sum += 29;
                else if(ch == 'D')
                    Sum += 30;
                else if(ch == 'E')
                    Sum += 31;
                else if(ch == 'F')
                    Sum += 32;
                else if(ch == 'G')
                    Sum += 33;
                else if(ch == 'H')
                    Sum += 34;
                else if(ch == 'I')
                    Sum += 35;
                else if(ch == 'J')
                    Sum += 36;
                else if(ch == 'K')
                    Sum += 37;
                else if(ch == 'L')
                    Sum += 38;
                else if(ch == 'M')
                    Sum += 39;
                else if(ch == 'N')
                    Sum += 40;
                else if(ch == 'O')
                    Sum += 41;
                else if(ch == 'P')
                    Sum += 42;
                else if(ch == 'Q')
                    Sum += 43;
                else if(ch == 'R')
                    Sum += 44;
                else if(ch == 'S')
                    Sum += 45;
                else if(ch == 'T')
                    Sum += 46;
                else if(ch == 'U')
                    Sum += 47;
                else if(ch == 'V')
                    Sum += 48;
                else if(ch == 'W')
                    Sum += 49;
                else if(ch == 'X')
                    Sum += 50;
                else if(ch == 'Y')
                    Sum  += 51;
                else if(ch == 'Z')
                    Sum += 52;
            }
            str = "";
            if(flag[Sum] == true)
            {
                System.out.printf("It is a prime word.\n");
            }
            else if(!flag[Sum])
            {
                System.out.printf("It is not a prime word.\n");
            }
        }
    }
}
