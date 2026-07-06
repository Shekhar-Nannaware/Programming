///////////////////////////////////////////////////////
//
//  Program :      Check Positive, Negative or Zero
//  Description :  Accepts one integer number from
//                 the user and checks whether the
//                 number is Positive, Negative or Zero.
//  Input :        One Integer Number
//  Output :       Positive Number / Negative Number / Zero
//  Author :       Shekhar Jalindar Nannaware
//  Date :         06/07/2026
//
///////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         One Integer Number
//  Output :        Displays whether the number is
//                  Positive, Negative or Zero.
//  Description :   Compares the entered number with
//                  zero using relational operators
//                  and displays the appropriate result.
//
///////////////////////////////////////////////////////

int Display(int iNum1)
{
  
    if(iNum1 > 0)
    {
        printf("%d is Positive Number\n", iNum1);
    }
    else if(iNum1 < 0)
    {
        printf("%d is Negative Number\n", iNum1);
    }
    else
    {
        printf("%d is Zero Number\n", iNum1);
    }

    return iNum1;
};

int main()
{
    int iNum1 = 0;
    int iRet = 0;

    printf("Enter The First Number : ");
    scanf("%d", &iNum1);

    iRet = Display(iNum1);

    printf("%d\n", iRet);
    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input 1 :
//      Enter The First Number : 15
//
//  Sample Output 1 :
//      15 is Positive Number
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 2 :
//      Enter The First Number : -8
//
//  Sample Output 2 :
//      -8 is Negative Number
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 3 :
//      Enter The First Number : 0
//
//  Sample Output 3 :
//      0 is Zero Number
//
///////////////////////////////////////////////////////
