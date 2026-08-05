#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
      
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d", &iValue);

    iRet = CheckEvenOdd(iValue);

    if (iRet == true)
    {
        printf("%d is Even \n", iValue);
    }
    else
    {
        printf("%d is odd \n", iValue);
    }
    
    return 0;
}

