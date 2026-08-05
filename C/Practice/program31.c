#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        printf("Invalid input \n");
        return;
    }
    
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d : Jay Ganesh...\n", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}