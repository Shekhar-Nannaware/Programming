import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program021
//   Description: Finds the Largest Digit in an Integer
//   Date       : 20/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

class LargestDigit
{
    public void CheckLargest(int iNo)
    {
        int iDigit = 0;                  // To Store Last Digit
        int Largest = 0;                 // To Store Largest Digit

        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if(iDigit > Largest)
            {
                Largest = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Largest Digit is : " + Largest);
    }
}

public class program021
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int iNo = 0;                      // To Store Number

        System.out.print("Enter Number : ");
        iNo = sc.nextInt();

        LargestDigit obj = new LargestDigit();

        obj.CheckLargest(iNo);

        sc.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to find the Largest Digit in an Integer
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 58321
//   Output : Largest Digit is : 8
//
/////////////////////////////////////////////////////////////////