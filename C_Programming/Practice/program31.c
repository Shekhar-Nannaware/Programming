#include<stdio.h>
#define BONUS_LIMIT 50000

void CheckBonus(int Salary)
{
    if (Salary >= BONUS_LIMIT)
    {
        printf("Bonus Eligible \n");
    }
    else
    {
        printf("Not Bonus Eligible \n");
    }
    
}

int main()
{
    int iNum = 0;
    printf("Enter The Salary : ");
    scanf("%d",&iNum);

    CheckBonus(iNum);
    
    return 0;    
}
