import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program003
//   Description: Performs Subtraction of 2 Integer Values
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program003
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

        iAns = iNo1 - iNo2;            // Perform Subtraction

        System.out.println("Difference : " + iAns);

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to perform Subtraction of 2 Integer Values
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 20 10
//   Output : Difference : 10
//
/////////////////////////////////////////////////////////////////