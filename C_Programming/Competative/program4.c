//////////////////////////////////////////////////////////////////////
//
//  Accept one Number and Check Whether  is Divisible by 5 or not.
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         int
//  Ouput :         int
//  Description :   Performs addition of 2 int
//  Date :          08/06/2026
//  Author :        Shekhar Jalindar Nannaware
//
//////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number \n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible By 5 \n");
    }
    else
    {
        printf("Not Divisible By 5\n");
        
    }
    return 0;
}

/////////////////////////////////////////////////////// 
//
//  Input :     25   
//  Output :    Divisible By 5 
// 
//  Input :     52  
//  Output :    Not Divisible By 5 
//              
///////////////////////////////////////////////////////