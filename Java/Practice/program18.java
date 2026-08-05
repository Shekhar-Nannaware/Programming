import java.util.Scanner;

public class program18 
{
    public static int CalculateTicketPrice(int iAge)
        {
            if (iAge >= 0 && iAge <= 5)
            {
                return 0;
            }
            else if (iAge >= 6 && iAge <= 18)
            {
                return 500;
            }
            else
            {
                return 400;
            }
       }
    public static void main(String[] args) 
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Please enter your age to calculate ticket prices : ");
        iValue = sc.nextInt();

        iRet = CalculateTicketPrice(iValue);

        System.out.println("Your ticket price will be " + iRet + " ruppes");

        sc.close();
    }
}


/*

#include <stdio.h>

int CalculateTicketPrice(int iAge)
{
    if (iAge >= 0 && iAge <= 5)
    {
        return 0;
    }
    else if (iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
    else
    {
        return 400;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter your age to calculate ticket prices : ");
    scanf("%d", &iValue);

    iRet = CalculateTicketPrice(iValue);

    printf("Your ticket price will be %d ruppes\n", iRet);

    return 0;
}
*/