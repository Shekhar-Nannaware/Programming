import  java.util.Scanner;

public class program10 
{
    static  void CheckEvenOdd(int iNo)
    {
        int iRemainder;
        iRemainder = iNo % 2;

        if(iRemainder == 0)
        {
            System.out.println("Number Is Even  ");
        }
        else
        {
            System.out.println("Number Is Odd ");
        }
    }
    public static void main(String[] args) 
    {
        int iValue;

       Scanner sc = new Scanner(System.in);

       System.out.println("Enter Number : ");
       iValue = sc.nextInt();

       CheckEvenOdd(iValue);

       sc.close();      
    }    
}