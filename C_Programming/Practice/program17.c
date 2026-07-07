#include<stdio.h>
#define DIVISOR 10

void CheckDivisibleBy10(int Number)
{
    if(Number % DIVISOR == 0)
    {
      printf("%d Number is Divisible By %d\n",Number,DIVISOR);
    }else{
      printf("%d Number is Not Divisible By %d\n",Number,DIVISOR);
    }
} 

int main()
{

    int iNum = 0;

    printf("Enter Number : ");
    scanf("%d",&iNum);

    CheckDivisibleBy10(iNum);

    return 0;
}
