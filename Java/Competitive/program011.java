import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program011
//   Description: Finds the Smallest Number among 3 Integer Values
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program011
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo1 = 0;                  // To Store First Input
        int iNo2 = 0;                  // To Store Second Input
        int iNo3 = 0;                  // To Store Third Input

        System.out.print("Enter First Number : ");
        iNo1 = src.nextInt();

        System.out.print("Enter Second Number : ");
        iNo2 = src.nextInt();

        System.out.print("Enter Third Number : ");
        iNo3 = src.nextInt();

        if(iNo1 <= iNo2 && iNo1 <= iNo3)
        {
            System.out.println("Smallest Number is : " + iNo1);
        }
        else if(iNo2 <= iNo1 && iNo2 <= iNo3)
        {
            System.out.println("Smallest Number is : " + iNo2);
        }
        else
        {
            System.out.println("Smallest Number is : " + iNo3);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to find the Smallest Number among 3 Integer Values
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 10 20 15
//   Output : Smallest Number is : 10
//
/////////////////////////////////////////////////////////////////