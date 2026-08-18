import java.util.Scanner;

public class program28 {
    public static int Display(int iValue)
    {
        int iCnt = 0;

        for (iCnt = 0; iCnt < iValue; iCnt++)
        {
        System.out.println("jay Ganesh...");        
        }

        return iCnt;
    }

    public static void main(String[] args) 
    {
        int iRet = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the frequency : ");
        iRet = sc.nextInt();

        Display(iRet);
    }
}