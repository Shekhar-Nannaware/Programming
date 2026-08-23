#include<stdio.h>

typedef unsigned int UINT;

// Poistion 3 & 8

int main()
{
    UINT iMask = 0X00000084;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated number : %d\n",iResult);

    return 0;
}