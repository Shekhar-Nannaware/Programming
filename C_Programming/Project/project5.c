///////////////////////////////////////////////////////
//
//  Program :      Bank Loan Eligibility System
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define MIN_AGE        21
#define MAX_AGE        60
#define MIN_SALARY     30000
#define MIN_CIBIL      750

///////////////////////////////////////////////////////
//
//  Function Name : LoanEligibility
//  Input :         Age, Salary, CIBIL
//  Output :        Loan Approved / Loan Rejected
//  Description :   Checks whether the applicant
//                  is eligible for a bank loan.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          09/07/2026
//
///////////////////////////////////////////////////////

void LoanEligibility(int Age, int Salary, int CibilScore)
{
    if(  (Age >= MIN_AGE) && (Age <= MAX_AGE) &&
         (Salary >= MIN_SALARY) &&
         (CibilScore >= MIN_CIBIL)
     )
    {
        printf("Age    : %d\n", Age);
        printf("Salary : %d\n", Salary);
        printf("CIBIL  : %d\n", CibilScore);

        printf("\nLoan Approved\n");
    }
    else
    {
        printf("Loan Rejected\n");
    }
}

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Age, Salary, CIBIL
//  Output :        Displays Loan Eligibility
//  Description :   Accepts applicant details
//                  and checks loan eligibility.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          09/07/2026
//
///////////////////////////////////////////////////////

int main()
{
    int Age = 0;
    int Salary = 0;
    int CibilScore = 0;

    ///////////////////////////////////////////////////
    // Accept Applicant Details
    ///////////////////////////////////////////////////

    printf("Enter Your Age : ");
    scanf("%d", &Age);

    printf("Enter Your Salary : ");
    scanf("%d", &Salary);

    printf("Enter Your CIBIL Score : ");
    scanf("%d", &CibilScore);

    ///////////////////////////////////////////////////
    // Check Loan Eligibility
    ///////////////////////////////////////////////////

    LoanEligibility(Age, Salary, CibilScore);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input 1 :
//
//      Age          : 25
//      Salary       : 45000
//      CIBIL Score  : 780
//
//  Output 1 :
//
//      Age    : 25
//      Salary : 45000
//      CIBIL  : 780
//
//      Loan Approved
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 2 :
//
//      Age          : 18
//      Salary       : 45000
//      CIBIL Score  : 780
//
//  Output 2 :
//
//      Loan Rejected
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 3 :
//
//      Age          : 35
//      Salary       : 25000
//      CIBIL Score  : 800
//
//  Output 3 :
//
//      Loan Rejected
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 4 :
//
//      Age          : 30
//      Salary       : 50000
//      CIBIL Score  : 700
//
//  Output 4 :
//
//      Loan Rejected
//
///////////////////////////////////////////////////////