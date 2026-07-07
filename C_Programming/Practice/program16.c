#include<stdio.h>

#define DIVISOR 3

void CheckDivisibleBy3(int Number)
{
    if(Number % DIVISOR == 0)
    {
        printf("%d is Divisible by %d\n", Number, DIVISOR);
    }
    else
    {
        printf("%d is Not Divisible by %d\n", Number, DIVISOR);
    }
}

int main()
{

    int iNum = 0;

    printf("Enter Number : ");
    scanf("%d", &iNum);

    CheckDivisibleBy3(iNum);

    
    return 0;
} 