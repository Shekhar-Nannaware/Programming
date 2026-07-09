///////////////////////////////////////////////////////
//
//  Program :      Electricity Bill System
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define RATE1              5
#define RATE2              8
#define RATE3              10

///////////////////////////////////////////////////////
//
//  Function Name : CalculateBill
//  Input :         Units
//  Output :        Electricity Bill / Invalid Units
//  Description :   Calculates electricity bill
//                  according to the number of
//                  units consumed.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          09/07/2026
//
///////////////////////////////////////////////////////

void CalculateBill(int Units)
{
    int Bill = 0;

    if(Units < 0)
    {
        printf("Invalid Units\n");
        return;
    }

    if(Units <= 100)
    {
        Bill = Units * RATE1;
    }
    else if(Units <= 300)
    {
        Bill = Units * RATE2;
    }
    else
    {
        Bill = Units * RATE3;
    }

    printf("Bill : %d\n", Bill);
}

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Units
//  Output :        Displays Electricity Bill
//  Description :   Accepts number of units from
//                  the user and displays the
//                  electricity bill.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          09/07/2026
//
///////////////////////////////////////////////////////

int main()
{
    int iUnits = 0;

    ///////////////////////////////////////////////////
    // Accept Number of Units
    ///////////////////////////////////////////////////

    printf("Enter Units : ");
    scanf("%d", &iUnits);

    ///////////////////////////////////////////////////
    // Display Electricity Bill
    ///////////////////////////////////////////////////

    CalculateBill(iUnits);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input 1 :
//
//      Units : 50
//
//  Output 1 :
//
//      Bill : 250
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 2 :
//
//      Units : 250
//
//  Output 2 :
//
//      Bill : 2000
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 3 :
//
//      Units : 350
//
//  Output 3 :
//
//      Bill : 3500
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Input 4 :
//
//      Units : -20
//
//  Output 4 :
//
//      Invalid Units
//
///////////////////////////////////////////////////////