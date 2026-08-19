import java.util.*;

public class program018
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;
        int Sum = 0;
        int iDigit = 0;

        System.out.print("Enter Number : ");
        iNo = src.nextInt();      

         while(iNo > 0)
         {
               iDigit = iNo % 10;
               Sum = Sum + iDigit;
               iNo = iNo / 10;
         }

        System.out.println("Sum of digits : " + Sum);

        src.close();
    }
}