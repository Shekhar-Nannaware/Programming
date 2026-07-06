///////////////////////////////////////////////////////
//
//  Program :      Student Information System
//
///////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name : main
//  Input :         Name, Age, Percentage, Grade
//  Output :        Displays Student Information
//  Description :   Accepts student details from user
//                  and displays them on the screen.
//  Author :        Shekhar Jalindar Nannaware
//  Date :          05/07/2026
//
///////////////////////////////////////////////////////

int main()
{
    char Name[50];
    int Age;
    float Percentage;
    char Grade;

    ///////////////////////////////////////////////////
    // Accept Student Information
    ///////////////////////////////////////////////////

    printf("Enter Name : ");
    scanf("%s", Name);

    printf("Enter Age : ");
    scanf("%d", &Age);

    printf("Enter Percentage : ");
    scanf("%f", &Percentage);

    printf("Enter Grade : ");
    scanf(" %c", &Grade);

    ///////////////////////////////////////////////////
    // Display Student Information
    ///////////////////////////////////////////////////

    printf("\n---------------------------------\n");    
    printf("      Student Information\n");
    printf("---------------------------------\n");

    printf("Name        : %s\n", Name);
    printf("Age         : %d\n", Age);
    printf("Percentage  : %.1f\n", Percentage);
    printf("Grade       : %c\n", Grade);

    return 0;
}

///////////////////////////////////////////////////////
//
//  Input :
//      Name        : Shekhar
//      Age         : 22
//      Percentage  : 58.0
//      Grade       : A
//
//  Output :
//
//      Student Information
//
//      Name        : Shekhar
//      Age         : 22
//      Percentage  : 58.0
//      Grade       : A
//
///////////////////////////////////////////////////////