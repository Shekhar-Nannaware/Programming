import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program005
//   Description: Performs Division of 2 Integer Values
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program005
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo1 = 0;                  // To Store First Input
        int iNo2 = 0;                  // To Store Second Input
        int iAns = 0;                  // To Store the Result

        System.out.print("Enter First Number : ");
        iNo1 = src.nextInt();

        System.out.print("Enter Second Number : ");
        iNo2 = src.nextInt();

        iAns = iNo1 / iNo2;            // Perform Division

        System.out.println("Quotient : " + iAns);

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to perform Division of 2 Integer Values
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 20 10
//   Output : Quotient : 2
//
/////////////////////////////////////////////////////////////////
