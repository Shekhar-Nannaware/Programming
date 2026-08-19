import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program012
//   Description: Checks whether a person is Eligible to Vote
//   Date       : 18/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

public class program012
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iAge = 0;                  // To Store Age
        int iMinimumAge = 18;          // Minimum Voting Age

        System.out.print("Enter Age : ");
        iAge = src.nextInt();

        if(iAge < iMinimumAge)
        {
            System.out.println("Person is Not Eligible to Vote : " + iAge);
        }
        else
        {
            System.out.println("Person is Eligible to Vote : " + iAge);
        }

        src.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to check whether a person is Eligible to Vote
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 20
//   Output : Person is Eligible to Vote : 20
//
/////////////////////////////////////////////////////////////////