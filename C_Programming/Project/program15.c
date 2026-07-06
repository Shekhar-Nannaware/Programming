#include<stdio.h>

#define DIVISOR 5

void CheckDivisibleBy5(int Number)
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
    int Number = 0;

    printf("Enter Number : ");
    scanf("%d", &Number);

    CheckDivisibleBy5(Number);

    return 0;
}
