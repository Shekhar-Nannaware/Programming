///////////////////////////////////////////////////////
//
//  Program :      Simple Interest Calculator
//  Description :   Calculates simple interest using
//                  principal, rate and time
//  Input :         Principal = 1000, Rate = 5.3, Time = 2
//  Output :        Simple Interest value
//  Author :        Shekhar Jalindar Nannaware
//  Date :          05/07/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Principal, Rate, Time
//  Output :        Simple Interest
//  Description :   Calculates simple interest using
//                  SI = (P × R × T) / 100
//
///////////////////////////////////////////////////////

int main()
{
    int Principal = 1000;
    float Rate = 5.3;
    int Time = 2;
    float SI = 0;

    ///////////////////////////////////////////////////
    // Calculation Section
    ///////////////////////////////////////////////////

    SI = (Principal * Rate * Time) / 100;

    ///////////////////////////////////////////////////
    // Output Section
    ///////////////////////////////////////////////////

    printf("Simple Interest = %f\n", SI);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input :
//      Principal = 1000
//      Rate = 5.3
//      Time = 2
//
//  Sample Output :
//      Simple Interest = 106.000000
//
///////////////////////////////////////////////////////
