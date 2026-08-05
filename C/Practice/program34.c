#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // filter
    if (iNo < 0)
    {
        printf("Invalid input \n");
        return;
    }
    
    for (iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d \n", iCnt);
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
