/*
    1. Student Result and Grade Calculation

    Requirements:
        1. Accept marks for three subjects from the user.
        2. Validate that each subject's marks are between 0 and 100.
        3. Calculate the total marks and percentage.
        4. If any subject has marks below 35, declare the student as Fail.
        5. If all subjects have at least 35 marks, declare the student as Pass.
        6. Assign grades according to the percentage:
              75% and above          - Distinction
              60% to below 75%       - First Class
              50% to below 60%       - Second Class
              35% to below 50%       - Pass Class
        7. Display total marks, percentage, result, and grade.

    Author : Shekhar Nannaware
    Date   : 24/10/2026
*/

#include "Student.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateResult
//  Input         : Integer, Integer, Integer
//  Output        : Displays total, percentage, result and grade
//  Description   : Accepts marks of three subjects, validates them,
//                  calculates percentage and displays result and grade.
//
////////////////////////////////////////////////////////////////////////////////

void CalculateResult(int iMarks1, int iMarks2, int iMarks3)
{
    int iTotal = 0;
    float fPercentage = 0.0f;

    // Validate marks
    if ((iMarks1 < 0) || (iMarks1 > 100) ||
        (iMarks2 < 0) || (iMarks2 > 100) ||
        (iMarks3 < 0) || (iMarks3 > 100))
    {
        printf("Marks must be between 0 and 100.\n");
    }
    else
    {
        // Calculate total and percentage
        iTotal = iMarks1 + iMarks2 + iMarks3;
        fPercentage = (float)iTotal / 3;

        printf("--------------------------------\n");
        printf("Total Marks : %d / 300\n", iTotal);
        printf("Percentage  : %.2f%%\n", fPercentage);

        // Check Pass or Fail
        if ((iMarks1 < 35) ||
            (iMarks2 < 35) ||
            (iMarks3 < 35))
        {
            printf("Result      : Fail\n");
        }
        else
        {
            printf("Result      : Pass\n");

            // Calculate grade
            if (fPercentage >= 75)
            {
                printf("Grade       : Distinction\n");
            }
            else if (fPercentage >= 60)
            {
                printf("Grade       : First Class\n");
            }
            else if (fPercentage >= 50)
            {
                printf("Grade       : Second Class\n");
            }
            else
            {
                printf("Grade       : Pass Class\n");
            }
        }

        printf("--------------------------------\n");
    }
}