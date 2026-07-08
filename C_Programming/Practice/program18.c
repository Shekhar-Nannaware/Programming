#include<stdio.h>
#define DIVISOR 2

void CheckEvenOdd(int Number)
{
    if(Number % DIVISOR == 0)
    {
      printf("%d Number is Even \n",Number);
    }
    else
    {
      printf("%d Number is Odd \n",Number);
    }
} 

int main()
{

    int iNum = 0;

    printf("Enter Number : ");
    scanf("%d",&iNum);

    CheckEvenOdd(iNum);

    return 0;
}

