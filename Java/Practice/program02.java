import java.util.Scanner;

public class Program02
{
    public static void main(String args[])
    {
        int iSum = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        int i = sc.nextInt();

        System.out.println("Enter Second Number : ");
        int j = sc.nextInt();

        iSum = i + j;
        System.out.println("Addition is : "+iSum);
    }
}
