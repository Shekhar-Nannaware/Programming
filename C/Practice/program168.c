#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    // Largest Value of int
    UINT iMask = 0xFFFFFFFF;
    printf("%u\t%X\n",iMask,iMask);
   
    return 0;
}