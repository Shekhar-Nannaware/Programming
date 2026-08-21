import java.util.*;

class LargestDigit
{
   public void CheckEvenOdd(int iNo)
{
    int EvenCount = 0;
    int OddCount = 0;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }

        iNo = iNo / 10;
    }

    System.out.println("Even Digits : " + EvenCount);
    System.out.println("Odd Digits  : " + OddCount);
}
}

public class program022
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int iNo = 0;                     

        System.out.print("Enter Number : ");
        iNo = sc.nextInt();

        LargestDigit obj = new LargestDigit();

        obj.CheckEvenOdd(iNo);

        sc.close();
    }
}
    