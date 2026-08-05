import java.util.Scanner;
public class program34 {
    static void Display(int iNo)
{
    int iCnt = 0;

    // filter
    if (iNo < 0)
    {
        System.out.println("Invalid input \n");
        return;
    }
    
    for (iCnt = iNo; iCnt >= 0; iCnt--)
    {
        System.out.println(iCnt);
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
