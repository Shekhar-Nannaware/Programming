#include <stdio.h>
#define AGE_INVAID -1

int CalculateTicketPrice(int iAge)
{
    // Input Filter
    if(iAge < 0)
    {
        return -1;
    }
    if (iAge >= 0 && iAge <= 5)
    {
        return 0;
    }
    else if (iAge >= 6 && iAge <= 18)
    {
        return 500;
    }
     else if (iAge >= 19 && iAge <= 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter your age to calculate ticket prices : ");
    scanf("%d", &iValue);

    iRet = CalculateTicketPrice(iValue);

    if (iRet == AGE_INVAID)
    {
        printf("please enter your positive age\n");
    }
    else
    {
        printf("Your ticket price will be %d ruppes\n",iRet);
    }
    
    return 0;
}