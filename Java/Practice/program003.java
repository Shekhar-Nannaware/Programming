import java.util.Scanner;

public class Program03
{
    public static void main(String args[])
    {
        float fSum = 0.0f;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        float i = sc.nextFloat();

        System.out.println("Enter Second Number : ");
        float j = sc.nextFloat();

        fSum = i + j;
        System.out.println("Addition is : "+fSum);
    }
}
