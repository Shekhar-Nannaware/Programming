#include<stdio.h>
#define DIVISOR1 3
#define DIVISOR2 5

void CheckDivisible(int Number)
{
    if(Number % DIVISOR1 == 0 && Number % DIVISOR2 == 0)
    {
        printf("%d is Divisible by 3 and 5 \n",Number);
    }
    else
    {
        printf("%d is Not Divisible by 3 and 5 \n",Number);
    }
}

int main()
{
    int iNum = 0;

    printf("Enter First Number : ");
    scanf("%d",&iNum);

    CheckDivisible(iNum);

    return 0;
}
