import java.util.Scanner;
public class program32 {

    static void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        System.err.println("Invalid input \n");
        return;
    }
    
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        System.err.println(iCnt);
    }
}

    public static void main(String[] args) {
    int iValue = 0;

    Scanner sc = new Scanner(System.in);

    System.err.println("Enter The Frequency : ");
    iValue = sc.nextInt();

    Display(iValue);
    }
}
