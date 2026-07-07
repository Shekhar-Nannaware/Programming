///////////////////////////////////////////////////////
//
//  Program :      Even Odd Checker
//  Description :  Accepts an integer and checks
//                 whether it is Even or Odd.
//  Input :        Integer Number
//  Output :       Even Number or Odd Number
//  Author :       Shekhar Jalindar Nannaware
//  Date :         05/07/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Integer Number
//  Output :        Even or Odd
//  Description :   Uses modulus operator (%) to
//                  determine whether the number
//                  is even or odd.
//
///////////////////////////////////////////////////////

int main()
{
    int iNum1 = 0;

    ///////////////////////////////////////////////////
    // Input Section
    ///////////////////////////////////////////////////

    printf("Enter First Number : ");
    scanf("%d", &iNum1);

    ///////////////////////////////////////////////////
    // Decision Making
    ///////////////////////////////////////////////////

    if(iNum1 % 2 == 0)
    {
        printf("%d is Even Number\n", iNum1);
    }
    else
    {
        printf("%d is Odd Number\n", iNum1);
    }

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input :
//      17
//
//  Sample Output :
//      17 is Odd Number
//
///////////////////////////////////////////////////////