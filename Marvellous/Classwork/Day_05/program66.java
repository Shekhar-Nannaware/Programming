import java.util.Scanner;

class program66
{   
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;
        
        Iteration iteration = new Iteration();

        System.out.println("Enter the frequency : ");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
}

class Iteration
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        iCnt = 1;

        while( iCnt <= iNo )
        {
            System.out.println("-------------");
            System.out.println(iCnt + " Jay Ganesh...");
            System.out.println("-------------");
            iCnt++;
        }
    }
}