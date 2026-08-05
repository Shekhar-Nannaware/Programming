import java.util.Scanner;
public class program31 {
    static void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        System.out.println("Invalid input \n");
        return;
    }
    
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        System.out.println(iCnt + " : Jay Ganesh...");
    }
}

    public static void main(String[] args) {
        
    int iValue = 0;

    Scanner sc = new Scanner(System.in);

    System.out.println("Enter The Frequency : ");
    iValue = sc.nextInt();

    Display(iValue);
    }
}
