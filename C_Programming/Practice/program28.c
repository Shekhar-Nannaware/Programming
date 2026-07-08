#include<stdio.h>

void CheckPositiveEven(int Number)
{
    if(Number >= 0 && Number % 2 == 0)   
    {
        printf("Positive Even Number \n");
    }
    else
    {
        printf("Not Positive Even Number \n");
    }
}

int main()
{
    int iNum = 0;

    printf("Enter The Positive Even Number : ");
    scanf("%d",&iNum);

    CheckPositiveEven(iNum);

    return 0;
}

