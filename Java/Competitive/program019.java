import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program019
//   Description: Reverses the Digits of an Integer
//   Date       : 20/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program019
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int iNo = 0;                     // To Store Number
        int Reverse = 0;                 // To Store Reverse Number
        int iDigit = 0;                  // To Store Last Digit

        System.out.print("Enter Number : ");
        iNo = sc.nextInt();

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            Reverse = Reverse * 10 + iDigit;
            iNo = iNo / 10;
        }

        System.out.println("Reverse Number is : " + Reverse);

        sc.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to reverse the Digits of an Integer
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 12345
//   Output : Reverse Number is : 54321
//
/////////////////////////////////////////////////////////////////