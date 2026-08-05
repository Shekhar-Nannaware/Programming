import java.util.Scanner;

public class Program5
{

    static float AddTwoNumber(float fValue1, float fValue2)
    {
        float fAns;

        fAns = fValue1 + fValue2;
        return fAns;
    }
    public static void main(String args[])
    {
        float fSum;
        float iValue1;
        float iValue2;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First Number : ");
         iValue1= sc.nextFloat();

        System.out.println("Enter Second Number : ");
         iValue2 = sc.nextFloat();

        fSum = AddTwoNumber(iValue1,iValue2);
        System.out.println("Addition is : "+fSum);

        sc.close();
    }
}