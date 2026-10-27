#include "Header.h"

void UnitsCalculate(int iUnit, char *cName)
{
    int iValue = 0;
    printf("Name is : %s\n", cName);
    printf("Units consumed : %d\n", iUnit);

    if (iUnit  < 0)
    {
        printf("Enter Valid Units \n");
    }
    else
    {
        if (iUnit < 5)
        {
            iValue = iUnit / 5;
            printf("%s \t%d",cName,iValue);
        }
        
    }
    
}
