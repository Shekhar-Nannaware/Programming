import java.util.Scanner;

public class Program6
{

    static float AddTwoNumber(
                                 float fNo1,       // first input
                                 float fNo2        // Second input
                             )
    {
        float fAns = 0.0f;                    // Variable to store result 
        fAns = fNo1 + fNo2;                   // Perform Addition

        return fAns;
    }
    public static void main(String args[])
    {
         float fValue1;                  //  To Store First input
         float fValue2;                  //  To Store Second input
         float fResult;                  //  To Store the Result


        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First Number : ");
         fValue1= sc.nextFloat();

        System.out.println("Enter Second Number : ");
         fValue2 = sc.nextFloat();

        fResult = AddTwoNumber(fValue1,fValue2);
        System.out.println("Addition is : "+fResult);

        sc.close();
    }
}