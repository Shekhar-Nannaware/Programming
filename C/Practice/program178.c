#include<stdio.h>

typedef unsigned int UINT;

// Position 23

int main()
{
    UINT iNo = 0;
    UINT iMask = 0xFFBFFFFF;
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated number : %d\n",iNo);

    return 0;
}