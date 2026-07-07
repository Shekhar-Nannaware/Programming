///////////////////////////////////////////////////////
//
//  Program :      Find Minimum of Two Numbers
//  Description :  Accepts two integer numbers from
//                 the user and displays the smaller number.
//  Input :        Two Integer Numbers
//  Output :       Minimum Number
//  Author :       Shekhar Jalindar Nannaware
//  Date :         05/07/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Two Integer Numbers
//  Output :        Minimum Number
//  Description :   Compares two numbers using the
//                  less than (<) operator and
//                  displays the smaller number.
//
///////////////////////////////////////////////////////

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;

    ///////////////////////////////////////////////////
    // Input Section
    ///////////////////////////////////////////////////

    printf("Enter First Number : ");
    scanf("%d", &iNum1);

    printf("Enter Second Number : ");
    scanf("%d", &iNum2);

    ///////////////////////////////////////////////////
    // Decision Making
    ///////////////////////////////////////////////////

    if(iNum1 < iNum2)
    {
        printf("Minimum Number = %d\n", iNum1);
    }
    else if(iNum2 < iNum1)
    {
        printf("Minimum Number = %d\n", iNum2);
    }
    else
    {
        printf("Both Numbers are Equal.\n");
    }

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input 1 :
//      Enter First Number : 25
//      Enter Second Number : 40
//
//  Sample Output 1 :
//      Minimum Number = 25
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 2 :
//      Enter First Number : 50
//      Enter Second Number : 20
//
//  Sample Output 2 :
//      Minimum Number = 20
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 3 :
//      Enter First Number : 30
//      Enter Second Number : 30
//
//  Sample Output 3 :
//      Both Numbers are Equal.
//
///////////////////////////////////////////////////////