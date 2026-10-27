// Approach 3

import java.util.Scanner;

class program39
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        Arithematic arithematic = null;
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        scanner = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        arithematic = new Arithematic();

        iResult = arithematic.Addition(iValue1, iValue2);

        System.out.println("Addition is : "+iResult);
    }
}

class Arithematic
{
    public int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}