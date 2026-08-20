import java.util.*;

/////////////////////////////////////////////////////////////////
//
//   Class Name : program020
//   Description: Checks whether the given Integer is a Palindrome
//   Date       : 20/08/2026
//   Author     : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

class Palindrome
{
    public boolean CheckPalindrome(int iNo)
    {
        int Original = iNo;             // To Store Original Number
        int Reverse = 0;                // To Store Reverse Number
        int iDigit = 0;                 // To Store Last Digit

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            Reverse = Reverse * 10 + iDigit;
            iNo = iNo / 10;
        }

        if(Reverse == Original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class program020
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int iNo = 0;                     // To Store Number

        System.out.print("Enter Number : ");
        iNo = sc.nextInt();

        Palindrome obj = new Palindrome();

        if(obj.CheckPalindrome(iNo))
        {
            System.out.println("Number is Palindrome : " + iNo);
        }
        else
        {
            System.out.println("Number is Not Palindrome : " + iNo);
        }

        sc.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Application to check whether the given Integer is a Palindrome
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//   Input  : 121
//   Output : Number is Palindrome : 121
//
/////////////////////////////////////////////////////////////////