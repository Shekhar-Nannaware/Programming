import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program014
//   Description: Checks whether a number is divisible by both 5 and 11
//   Date       : 20/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program014
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;                  // To Store Number

        System.out.print("Enter Number : ");
        iNo = src.nextInt();

        if(iNo % 5 == 0 && iNo % 11 == 0)
        {
            System.out.println("Number is divisible by both 5 and 11 : " + iNo);
        }
        else
        {
            System.out.println("Number is NOT divisible by both 5 and 11 : " + iNo);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to check whether a number is divisible by both 5 and 11
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 55
//   Output : Number is divisible by both 5 and 11 : 55
//
/////////////////////////////////////////////////////////////////