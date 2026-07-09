///////////////////////////////////////////////////////
//
//  Program :      Employee Salary & Bonus System
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define BONUS_LIMIT        50000
#define EXPERIENCE_LIMIT   5

///////////////////////////////////////////////////////
//
//  Function Name : EmployeeBonus
//  Input :         Salary, Experience
//  Output :        Bonus Eligible / Bonus Not Eligible
//                  Invalid Salary / Invalid Experience
//  Description :   Checks whether the employee is
//                  eligible for bonus based on
//                  salary and experience.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          09/07/2026
//
///////////////////////////////////////////////////////

void EmployeeBonus(int Salary, int Experience)
{
    if(Salary >= 0)
    {
        if(Experience >= 0)
        {
            if(   (Salary >= BONUS_LIMIT) &&
                  (Experience >= EXPERIENCE_LIMIT)
              )
            {
                printf("Bonus Eligible\n");
            }
            else
            {
                printf("Bonus Not Eligible\n");
            }
        }
        else
        {
            printf("Invalid Experience\n");
        }
    }
    else
    {
        printf("Invalid Salary\n");
    }
}

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Salary, Experience
//  Output :        Displays Employee Bonus Status
//  Description :   Accepts salary and experience
//                  from the user and checks
//                  bonus eligibility.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          09/07/2026
//
///////////////////////////////////////////////////////

int main()
{
    int Salary = 0;
    int Experience = 0;

    ///////////////////////////////////////////////////
    // Accept Employee Information
    ///////////////////////////////////////////////////

    printf("Enter Salary : ");
    scanf("%d", &Salary);

    printf("Enter Experience : ");
    scanf("%d", &Experience);

    ///////////////////////////////////////////////////
    // Check Bonus Eligibility
    ///////////////////////////////////////////////////

    EmployeeBonus(Salary, Experience);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input 1 :
//
//      Salary      : 60000
//      Experience  : 7
//
//  Output 1 :
//
//      Bonus Eligible
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 2 :
//
//      Salary      : 35000
//      Experience  : 8
//
//  Output 2 :
//
//      Bonus Not Eligible
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 3 :
//
//      Salary      : -1000
//      Experience  : 5
//
//  Output 3 :
//
//      Invalid Salary
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 4 :
//
//      Salary      : 60000
//      Experience  : -2
//
//  Output 4 :
//
//      Invalid Experience
//
///////////////////////////////////////////////////////

