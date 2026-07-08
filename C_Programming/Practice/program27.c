#include<stdio.h>

void CheckRange(int Number)
{
   
    if(Number >=0 && Number <=100)
    {
        printf("Valid Number  %d\n",Number);
    }
    else
    {
        printf("Invalid Number  %d\n",Number);
    }
}
int main()
{
    int iNum = 0;

    printf("Enter Number : ");
    scanf("%d",&iNum);

    CheckRange(iNum);

    return 0;
}
