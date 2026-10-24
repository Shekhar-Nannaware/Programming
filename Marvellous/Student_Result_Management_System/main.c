/*
    1. Student Result and Grade Calculation

    Description:
        Accepts marks for three subjects from the user and calls
        CalculateResult() to validate marks, calculate percentage,
        determine Pass/Fail result, and display the grade.

    Conditions:
        Use only if, if-else, nested if-else, and logical operators.
        Do not use loops or switch.

    Author : Shekhar Nannaware
    Date   : 24/10/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include "Student.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//  Function Name : main
//  Input         : None
//  Output        : Returns EXIT_SUCCESS
//  Description   : Accepts marks for three subjects and calls
//                  CalculateResult() to display the result.
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iSubject1 = 0;
    int iSubject2 = 0;
    int iSubject3 = 0;

    printf("Subject 1 Marks : \t");
    scanf("%d", &iSubject1);

    printf("Subject 2 Marks : \t");
    scanf("%d", &iSubject2);

    printf("Subject 3 Marks : \t");
    scanf("%d", &iSubject3);

    CalculateResult(iSubject1, iSubject2, iSubject3);

    return EXIT_SUCCESS;
}