import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program009
//   Description: Finds the Largest Number among 2 Integer Values
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program009
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo1 = 0;                  // To Store First Input
        int iNo2 = 0;                  // To Store Second Input

        System.out.print("Enter First Number : ");
        iNo1 = src.nextInt();

        System.out.print("Enter Second Number : ");
        iNo2 = src.nextInt();

        if(iNo1 > iNo2)
        {
            System.out.println("Largest Number is : " + iNo1);
        }
        else
        {
            System.out.println("Largest Number is : " + iNo2);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to find the Largest Number among 2 Integer Values
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 10 20
//   Output : Largest Number is : 20
//
/////////////////////////////////////////////////////////////////