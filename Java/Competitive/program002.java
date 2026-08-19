import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program002
//   Description: Performs Addition of 2 Integer Values
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program002
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

        iAns = iNo1 + iNo2;            // Perform Addition

        System.out.println("Sum : " + iAns);

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to perform Addition of 2 Integer Values
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 10 20
//   Output : Sum : 30
//
/////////////////////////////////////////////////////////////////