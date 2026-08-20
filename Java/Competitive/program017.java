import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program017
//   Description: Counts the total number of digits in an Integer
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program017
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        String sNo = "";                 // To Store Number as String
        int iNo = 0;                     // To Store Integer Number
        int iCount = 0;                  // To Count Digits

        System.out.print("Enter Number : ");
        sNo = src.nextLine();

        iNo = Integer.parseInt(sNo);

        if(iNo == 0)
        {
            iCount = sNo.length();
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