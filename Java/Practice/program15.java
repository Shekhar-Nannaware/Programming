import java.util.Scanner;
public class program15 
{
    public static boolean CheckEvenOdd(int iNo)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String[] args) 
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number to check whether it is Even or Odd : ");            
        iValue = sc.nextInt();

        if(bRet == true)
        {
            System.out.println(iValue + " is Even");
        }
        else
        {
            System.out.println(iValue + " is Odd");
        }

        sc.close();
    }
}

/*

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }

    return 0;
}

*/
