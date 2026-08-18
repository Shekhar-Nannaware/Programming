import  java.util.Scanner;

public class program11 
{
    public static int CheckEvenOdd(int iNo)
    {
        int iRemainder;

        iRemainder = iNo % 2;

        return iRemainder;
    }
    public static void main(String[] args) 
    {
         int iValue;
         int iRet;

         Scanner sc = new Scanner(System.in);

         System.out.println("Enter Number : ");
         iValue = sc.nextInt();

        iRet = CheckEvenOdd(iValue);

        if(iRet == 0)
        {
            System.out.println("Number is Even ");
        }
        else
        {
            System.out.println("Number is Odd ");
        }
        
        sc.close();
    }
}
