#include<stdio.h>

void CheckPositiveNegative(int Number)
{
     if(Number >= 1)
     {
      printf("%d Number Is Positive \n",Number);
     }
     else if(Number == 0)
     {
      printf("%d Number Is Zero \n",Number);
     }
     else
     {
      printf("%d Number Is Negative \n",Number);
     }
}
void main()
{
  int iNum = 0;

  printf("Enter Number And Check Positive and Negative : ");
  scanf("%d",&iNum);

  CheckPositiveNegative(iNum);
  
  return 0;
}
