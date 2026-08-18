#include<stdio.h>

int Display( int iValue)
{
    int iCnt = 0;

    // Updator
    if (iValue < 0)
    {
        iValue = -iValue;
    }

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
       printf("jay Ganesh...\n");        
    }
}

int main()
{
    int iRet = 0;

    printf("Enter the frequency : ");
    scanf("%d",&iRet);

    Display(iRet);

    return 0;
}