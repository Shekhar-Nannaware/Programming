import java.util.Scanner;

public class program14 
{
     static boolean CheckEvenOdd(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else{
            return  false;
        }
    }
    public static void main(String[] args)
    {
        int iValue = 0;
        boolean iRet;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number to check whether it is Even or Odd : ");  
        iValue = sc.nextInt();

        iRet = CheckEvenOdd(iValue);

        if(iRet == true)
        {
            System.out.println(iValue + " is Even");
        }
        else
        {
            System.out.println(iValue + " is Odd");
        }
    }    
}