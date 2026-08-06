
import java.util.*;
public class program41 {
    
    public  static void CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Number is Divisible 3 & 5 ");
        }
        else
        {
            System.out.println("Number is Not Divisible 3 & 5 ");
        }
    }
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        CheckDivisible(iValue);
    }
}