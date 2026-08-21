#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//   Function Name : Division
//   Description   : Performs division of two Integer Values
//   Input         : Two Integer Values
//   Output        : Division of two Integer Values
//   Date          : 21/08/2026
//   Author        : Shekhar Jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

int Division(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

/////////////////////////////////////////////////////////////////
//
//   Application to perform Division of two Integer Values
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int iRet = 0;

    iRet = Division(iValue1, iValue2);

    printf("Division is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//   Input  : 15 5
//   Output : Division is : 3
//
/////////////////////////////////////////////////////////////////