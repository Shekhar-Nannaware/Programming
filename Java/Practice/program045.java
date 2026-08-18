// Type 2
import java.util.*;

class NumberX{
    static boolean CheckDivisible(int iNo)
    {
        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
public class program45 {
    public static  void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        boolean bRet = false;

        System.out.println("Enter Number : ");
        iNum = sobj.nextInt();

        bRet = NumberX.CheckDivisible(iNum);

        if(bRet == true)
        {
            System.out.println("Number is Divisible 3 & 5");
        }
        else
        {
            System.out.println("Number is Not Divisible 3 & 5");
        }

    }
}
