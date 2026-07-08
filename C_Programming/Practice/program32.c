#include<stdio.h>
#define DIV2 2
#define DIV3 3
#define DIV5 5

    void CheckDivisible(int Number)
    {
        if (Number % DIV2 == 0 && Number % DIV3 == 0 && Number % DIV5 == 0)
        {
           printf("Divisible by 2,3 and 5 \n");
        }
        else
        {
           printf("Not Divisible \n"); 
        }       
    }

int main()
{
    int iNum = 0;

    printf("Enter Number : ");
    scanf("%d",&iNum);

    CheckDivisible(iNum);

    return 0;    
}
