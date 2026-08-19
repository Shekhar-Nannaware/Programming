import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program008
//   Description: Checks whether a number is Positive, Negative or Zero
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program008
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;                   // To Store Input

        System.out.print("Enter Number : ");
        iNo = src.nextInt();

        if(iNo > 0)
        {
            System.out.println("Number is Positive : " + iNo);
        }
        else if(iNo < 0)
        {
            System.out.println("Number is Negative : " + iNo);
        }
        else
        {
            System.out.println("Number is Zero : " + iNo);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to check whether a number is Positive, Negative or Zero
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 10
//   Output : Number is Positive : 10
//
/////////////////////////////////////////////////////////////////