import java.util.Scanner;
public class program12
{
   public static int CheckEvenOdd(int iNo)
    {
        int iRemainder;

        iRemainder = iNo % 2;
        return  iRemainder;
    }
    public static void main(String[] args) 
    {
        int iValue;
        int iRet;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number to check whether it is Even or Odd : ");    
        iValue = sc.nextInt();

        iRet = CheckEvenOdd(iValue);

        if(iRet == 0)
        {
            System.out.println(iValue + " is Even");
        }
        else
        {
            System.out.println(iValue + " is odd");
        }
        sc.close();
    }
}