/////////////////////////////////////////////////////////////////
//
//   Include Required header Files
//
/////////////////////////////////////////////////////////////////

import java.util.Scanner;

/////////////////////////////////////////////////////////////////
//
//   Function Name : AddTwoNumbers
//   Input         : float, float
//   Output        : float
//   Description   : Performs Addition of 2 floats
//   Date          : 04/08/2026
//   Author        : Shekhar jalindar Nannaware
//
/////////////////////////////////////////////////////////////////
public class Program8
{

/////////////////////////////////////////////////////////////////
//
//   Application to perform Addition of 2 float Values
//
/////////////////////////////////////////////////////////////////

    static float AddTwoNumber(
                                 float fNo1,       // first input
                                 float fNo2        // Second input
                             )
    {
        float fAns;                    // Variable to store result 
        fAns = fNo1 + fNo2;            // Perform Addition

        return fAns;
    }
    public static void main(String args[])
    {
         float fValue1;                  //  To Store First input
         float fValue2;                  //  To Store Second input
         float fResult;                  //  To Store the Result


        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First Number : ");
         fValue1= sc.nextFloat();

        System.out.println("Enter Second Number : ");
         fValue2 = sc.nextFloat();

        fResult = AddTwoNumber(fValue1,fValue2);
        System.out.println("Addition is : "+fResult);

        sc.close();
    }
}

/////////////////////////////////////////////////////////////////
//
//   Input  :    10.0    11.0
//   Output :    21.0
//
/////////////////////////////////////////////////////////////////  