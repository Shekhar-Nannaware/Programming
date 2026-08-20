import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program015
//   Description: Calculates the Grade of a Student based on Marks
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program015
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int Marks = 0;                  // To Store Student Marks

        System.out.print("Enter Marks : ");
        Marks = src.nextInt();

        if(90 <= Marks)
        {
            System.out.println("Grade : A");
        }
        else if(75 <= Marks)
        {
            System.out.println("Grade : B");
        }
        else if(60 <= Marks)
        {
            System.out.println("Grade : C");
        }
        else if(40 <= Marks)
        {
            System.out.println("Grade : D");
        }
        else
        {
            System.out.println("Grade : Fail");
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to calculate the Grade of a Student based on Marks
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 85
//   Output : Grade : B
//
/////////////////////////////////////////////////////////////////