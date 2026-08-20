import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program018
//   Description: Calculates the Sum of all Digits in an Integer
//   Date       : 20/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program018
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;                     // To Store Number
        int Sum = 0;                     // To Store Sum of Digits
        int iDigit = 0;                  // To Store Last Digit

        System.out.print("Enter Number : ");
        iNo = src.nextInt();

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            Sum = Sum + iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Sum of Digits : " + Sum);

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to calculate the Sum of all Digits in an Integer
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 12345
//   Output : Sum of Digits : 15
//
/////////////////////////////////////////////////////////////////