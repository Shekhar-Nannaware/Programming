import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program016
//   Description: Counts the total number of digits in an Integer
//   Date       : 20/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program016
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;                    // To Store Number
        int iCount = 0;                 // To Count Digits

        System.out.print("Enter Number : ");
        iNo = src.nextInt();

        if(iNo == 0)
        {
            iCount = iCount + 1;
        }
        else
        {
            while(iNo > 0)
            {
                iCount++;
                iNo = iNo / 10;
            }
        }

        System.out.println("Number of Digits : " + iCount);

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to count the total number of digits in an Integer
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 12345
//   Output : Number of Digits : 5
//
/////////////////////////////////////////////////////////////////