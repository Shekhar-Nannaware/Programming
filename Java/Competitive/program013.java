import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program013
//   Description: Checks whether the given year is a Leap Year
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program013
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int Year = 0;                  // To Store Year

        System.out.print("Enter Year Number : ");
        Year = src.nextInt();

        if((Year % 400 == 0) || ((Year % 4 == 0) && (Year % 100 != 0)))
        {
            System.out.println("Leap Year : " + Year);
        }
        else
        {
            System.out.println("Not Leap Year : " + Year);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to check whether the given year is a Leap Year
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 2024
//   Output : Leap Year : 2024
//
/////////////////////////////////////////////////////////////////