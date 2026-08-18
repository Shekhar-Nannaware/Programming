#include<stdio.h>

void Display( int iValue)
{
    int iCnt = 0;

    // Updator
    if (iValue < 0)
    {
       printf("Invalid Input\n");
       return;
    }

    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
       printf("jay Ganesh...\n");        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}