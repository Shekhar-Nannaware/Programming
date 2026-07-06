///////////////////////////////////////////////////////
//
//  Program :      Area of Rectangle
//  Description :  Calculates the area of a rectangle
//                 using Length and Width.
//  Input :        Length = 15, Width = 8
//  Output :       Area = 120
//  Author :       Shekhar Jalindar Nannaware
//  Date :         05/07/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Length, Width
//  Output :        Area of Rectangle
//  Description :   Calculates and displays the area
//                  of a rectangle.
//
///////////////////////////////////////////////////////

int main()
{
    int Length = 15;
    int Width = 8;
    int Area = 0;

    ///////////////////////////////////////////////////
    // Calculate Area
    ///////////////////////////////////////////////////

    Area = Length * Width;

    ///////////////////////////////////////////////////
    // Display Result
    ///////////////////////////////////////////////////

    printf("Length = %d\n", Length);
    printf("Width  = %d\n", Width);
    printf("Area   = %d\n", Area);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Sample Input :
//      Length = 15
//      Width  = 8
//
//  Sample Output :
//      Length = 15
//      Width  = 8
//      Area   = 120
//
///////////////////////////////////////////////////////