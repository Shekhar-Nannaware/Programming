import java.util.*;

public class program014
{
    public static void main(String[] args)
    {
        Scanner src = new Scanner(System.in);

        int iNo = 0;   

        System.out.println("Enter Number : ");
        iNo = src.nextInt();

        if(iNo % 5 == 0 && iNo % 11 == 0)
        {
            System.out.println("Number is divisible by both 5 and 11");
        }
        else 
        {
            System.out.println("Number is NOT divisible by both 5 and 11");
        }
        src.close();
    }
}
