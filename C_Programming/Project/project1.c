/******************************************************************************
*
*   Project Name : Student Result Management System
*
*   Author       : Shekhar Nannaware
*
*   Language     : C Programming
*
*   Description  :
*   This program checks whether a student is eligible based on attendance.
*   If eligible, it displays the student's grade according to the marks.
*
******************************************************************************/

#include<stdio.h>

#define ATTENDANCE_LIMIT   75
#define MAX_MARKS          100
#define MIN_MARKS          0

#define A_GRADE            90
#define B_GRADE            75
#define C_GRADE            60
#define D_GRADE            35

///////////////////////////////////////////////////////////////////////////////
//
// Function Name : StudentResult
// Description   : Checks attendance and displays grade.
// Input         : Integer, Integer
// Output        : Grade / Not Eligible / Invalid Marks
//
///////////////////////////////////////////////////////////////////////////////

void StudentResult(int Marks, int Attendance)
{
    if((Marks < MIN_MARKS) || (Marks > MAX_MARKS))
    {
        printf("Invalid Marks\n");
        return;
    }

    if(Attendance < ATTENDANCE_LIMIT)
    {
        printf("Not Eligible\n");
        return;
    }

    if(Marks >= A_GRADE)
    {
        printf("Result  : A Grade\n");
    }
    else if(Marks >= B_GRADE)
    {
        printf("Result : B Grade\n");
    }
    else if(Marks >= C_GRADE)
    {
        printf("Result : C Grade\n");
    }
    else if(Marks >= D_GRADE)
    {
        printf("Result : D Grade\n");
    }
    else
    {
        printf("Result : Fail\n");
    }
}

///////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iMarks = 0;
    int iAttendance = 0;

    printf("Enter Student Marks  : ");
    scanf("%d", &iMarks);

    printf("Enter Attendance     : ");
    scanf("%d", &iAttendance);


    StudentResult(iMarks, iAttendance);


    return 0;
}

