///////////////////////////////////////////////////////
//
//  Program :      Arithmetic Operations Program
//  Description :   Performs addition, subtraction,
//                  multiplication, division and modulus
//                  on two integers
//  Input :         Two integers (a, b)
//  Output :        Results of arithmetic operations
//  Author :        Shekhar Jalindar Nannaware
//  Date :          05/07/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Two integers (a, b)
//  Output :        Prints arithmetic results
//  Description :   Demonstrates basic arithmetic operators
//
///////////////////////////////////////////////////////

int main()
{
    int a = 25;
    int b = 15;

    int Ans = 0;

    ///////////////////////////////////////////////////
    // Arithmetic Operations
    ///////////////////////////////////////////////////

    Ans = a + b;
    printf("Addition       = %d\n", Ans);

    Ans = a - b;
    printf("Subtraction    = %d\n", Ans);

    Ans = a * b;
    printf("Multiplication = %d\n", Ans);

    Ans = a / b;
    printf("Division       = %d\n", Ans);

    Ans = a % b;
    printf("Modulus        = %d\n", Ans);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input :
//      a = 25
//      b = 15
//
//  Sample Output :
//      Addition       = 40
//      Subtraction    = 10
//      Multiplication = 375
//      Division       = 1
//      Modulus        = 10
//
///////////////////////////////////////////////////////