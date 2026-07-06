///////////////////////////////////////////////////////
//
//  Program :      Swap Two Numbers
//  Description :  Swaps two integer numbers using
//                 a temporary variable.
//  Input :        A = 10, B = 20
//  Output :       A = 20, B = 10
//  Author :       Shekhar Jalindar Nannaware
//  Date :         05/07/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Two Integer Numbers
//  Output :        Swapped Numbers
//  Description :   Uses a temporary variable to
//                  exchange the values of two numbers.
//
///////////////////////////////////////////////////////

int main()
{
    int a = 10;
    int b = 20;
    int Temp = 0;

    ///////////////////////////////////////////////////
    // Display Before Swapping
    ///////////////////////////////////////////////////

    printf("Before Swap:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    ///////////////////////////////////////////////////
    // Swap Logic
    ///////////////////////////////////////////////////

    Temp = a;
    a = b;
    b = Temp;

    ///////////////////////////////////////////////////
    // Display After Swapping
    ///////////////////////////////////////////////////

    printf("\nAfter Swap:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input :
//      A = 10
//      B = 20
//
//  Sample Output :
//
//      Before Swap:
//      A = 10
//      B = 20
//
//      After Swap:
//      A = 20
//      B = 10
//
///////////////////////////////////////////////////////
