#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    printf("Enter the bit position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);

    iNo = iNo ^ iMask;

    printf("Updated number : %d\n",iNo);

    return 0;
}