///////////////////////////////////////////////////////
//
//  Program :      Student Result Management System
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define ATTENDANCE_LIMIT   75
#define MAX_MARKS          100
#define MIN_MARKS          0

#define A_GRADE            90
#define B_GRADE            75
#define C_GRADE            60
#define D_GRADE            35

///////////////////////////////////////////////////////
//
//  Function Name : StudentResult
//  Input :         Marks, Attendance
//  Output :        Grade / Not Eligible / Invalid Marks
//  Description :   Checks whether the student is
//                  eligible based on attendance.
//                  If eligible, displays the grade
//                  according to the marks.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          08/07/2026
//
///////////////////////////////////////////////////////

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
        printf("Result : A Grade\n");
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

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Marks, Attendance
//  Output :        Displays Student Result
//  Description :   Accepts student marks and
//                  attendance from the user and
//                  displays the final result.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          08/07/2026
//
///////////////////////////////////////////////////////

int main()
{
    int iMarks = 0;
    int iAttendance = 0;

    ///////////////////////////////////////////////////
    // Accept Student Details
    ///////////////////////////////////////////////////

    printf("Enter Student Marks : ");
    scanf("%d", &iMarks);

    printf("Enter Attendance    : ");
    scanf("%d", &iAttendance);

    ///////////////////////////////////////////////////
    // Display Student Result
    ///////////////////////////////////////////////////

    StudentResult(iMarks, iAttendance);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input 1 :
//
//      Marks       : 88
//      Attendance  : 82
//
//  Output 1 :
//
//      Result : B Grade
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 2 :
//
//      Marks       : 95
//      Attendance  : 60
//
//  Output 2 :
//
//      Not Eligible
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 3 :
//
//      Marks       : 120
//      Attendance  : 80
//
//  Output 3 :
//
//      Invalid Marks
//
///////////////////////////////////////////////////////