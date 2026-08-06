import java.util.*;

class NumberX
{
    public int SumFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
    }
}
public class program49 {
    public static void main(String[] args) {
        
      Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        iRet = nobj.SumFactors(iValue);
        
        System.out.println("Summation of factors : "+iRet);
    }
}
