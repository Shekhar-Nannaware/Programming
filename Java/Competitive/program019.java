import java.util.*;

public class program019
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int iNo = 0;
        int Sum = 0;
        int iDigit = 0;

        System.out.print("Enter Number : ");
        iNo = sc.nextInt();      

         while(iNo > 0)
         {
             iDigit = iNo % 10;
             Sum = iNo / 10;
             Sum = iDigit;
         }

        System.out.println("Sum of digits : " + Sum);

        sc.close();
    }
}