#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    // Smallest Value of int
    UINT iMask = 0x00000000;
    printf("%d\t%X\n",iMask,iMask);
   
    return 0;
}