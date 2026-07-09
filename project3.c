///////////////////////////////////////////////////////
//
//  Mini Project 3
//
//  Project Name : ATM Withdrawal System
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define MIN_BALANCE 1000

///////////////////////////////////////////////////////
//
//  Function Name : ATM
//  Input         : Integer, Integer
//  Output        : Transaction Status
//  Description   : Checks balance validity,
//                  withdrawal amount validity,
//                  performs withdrawal,
//                  and maintains minimum balance.
//
//  Author        : Shekhar Jalindar Nannaware
//  Date          : 09/07/2026
//
///////////////////////////////////////////////////////

void ATM(int Balance, int WithdrawAmount)
{
    int RemainingBalance = 0;

    if(Balance < 0)
    {
        printf("Invalid Balance\n");
    }

    else if(WithdrawAmount <= 0)
    {
        printf("Invalid Amount\n");
    }

    else if(WithdrawAmount > Balance)
    {
        printf("Insufficient Balance\n");
    }

    else
    {
        RemainingBalance = Balance - WithdrawAmount;

        if(RemainingBalance >= MIN_BALANCE)
        {
            printf("\n---------------------------------\n");
            printf("   Transaction Successful !..\n");
            printf("---------------------------------\n");

            printf("Withdraw Amount   : %d\n", WithdrawAmount);
            printf("Remaining Balance : %d\n", RemainingBalance);
        }
        else
        {
            printf("Insufficient Balance\n");
        }
    }
}

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts Balance and
//                  Withdrawal Amount from user.
//
///////////////////////////////////////////////////////

int main()
{
    int iBalance = 0;
    int iWithdraw = 0;

    printf("Enter Account Balance : ");
    scanf("%d", &iBalance);

    printf("Enter Withdraw Amount : ");
    scanf("%d", &iWithdraw);


    ATM(iBalance, iWithdraw);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input 1
//
//      Balance  : 10000
//      Withdraw : 3000
//
//  Output
//
//      Transaction Successful
//      Withdraw Amount   : 3000
//      Remaining Balance : 7000
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 2
//
//      Balance  : 5000
//      Withdraw : 4500
//
//  Output
//
//      Insufficient Balance
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 3
//
//      Balance  : -500
//
//  Output
//
//      Invalid Balance
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Sample Input 4
//
//      Balance  : 10000
//      Withdraw : -100
//
//  Output
//
//      Invalid Amount
//
///////////////////////////////////////////////////////

