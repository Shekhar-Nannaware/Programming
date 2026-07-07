//////////////////////////////////////////////////////////////////////
//
//  Accept Number from user and Check whether number is even or odd.
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

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(iNo)
{

    if (iNo % 2 == 0)
    {
        printf("Number is Even  \n");
    }
    else
    {
        printf("Number is Odd \n");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

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
