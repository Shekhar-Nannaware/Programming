//////////////////////////////////////////////////////////////////////
//
//  Accept Two Number from user and display first number in second number of times.
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         int, int
//  Ouput :         int
//  Description :   Performs addition of 2 int
//  Date :          09/06/2026
//  Author :        Shekhar Jalindar Nannaware
//
//////////////////////////////////////////////////////////////////////

int Display(int iNo, int iFrequency)
{

    int iResult = 0;
    for (iResult = 0; iResult < iFrequency; iFrequency--)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    printf("Enter Number\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input :     12  5
//  Output :    12	12	12	12	12
//
//  Input :     -2  3
//  Output :    -2	-2	-2	
//
//  Input :     -2  0
//  Output :     
//
///////////////////////////////////////////////////////
