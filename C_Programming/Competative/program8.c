//////////////////////////////////////////////////////////////////////
//
//  Accept one Number from user if number is less than 10 then print "Hello" otherwise print "Demo".
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

void Display(int iNo)
{
  
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input :     8
//  Output :    Hello
// 
//  Input :     18
//  Output :    Demo

///////////////////////////////////////////////////////
