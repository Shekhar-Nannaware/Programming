#include "Header.h"

int main()
{
    int iUnit = 0;
    char cName[50];

    printf("Enter Name : \n");
    scanf("%49s", cName);

    printf("Enter Units : \n");
    scanf("%d", &iUnit);

    UnitsCalculate(iUnit, cName);

    return EXIT_SUCCESS;
}

