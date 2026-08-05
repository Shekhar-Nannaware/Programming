import java.util.Scanner;
public class program30 {

    static void Display( int iValue)
    {
        int iCnt = 0;

        // Updator
        if (iValue < 0)
        {
          System.out.println("Invalid Input");
          return;
        }

        for (iCnt = 1; iCnt <= iValue; iCnt++)
        {
          System.out.println("jay Ganesh...");        
        }
    }

    public static void main(String[] args) {


    int iValue = 0;

    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the frequency : ");
    iValue = sc.nextInt();

    Display(iValue);
        
    }
}
