import java.util.Scanner;
public class program13 
{
    public static boolean CheckEvenOdd(int iNo)
    {
        int iRemainder = 0;
        if(iRemainder == 0)
        {
             return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String[] args)
    {
         int iValue = 0;
         boolean bRet = false;
         
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter number to check whether it is Even or Odd : ");
         iValue = sc.nextInt();

         bRet = CheckEvenOdd(iValue);

         if(bRet == true)
         {
            System.out.println(iValue + " is Even");
         }
         else
         {
            System.out.println(iValue + " is Odd");
         }

         sc.close();
    }    
}