import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program007
//   Description: Checks whether a number is Even or Odd
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program007
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;                   // To Store Input

        System.out.print("Enter Number : ");
        iNo = src.nextInt();

        if(iNo % 2 == 0)
        {
            System.out.println("Even Number : " + iNo);
        }
        else
        {
            System.out.println("Odd Number : " + iNo);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to check whether a number is Even or Odd
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 10
//   Output : Even Number : 10
//
/////////////////////////////////////////////////////////////////