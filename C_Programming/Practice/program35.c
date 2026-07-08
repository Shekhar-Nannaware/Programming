#include<stdio.h>

void CheckTriangle(int A1,int A2,int A3)
{
     int Sum = 0;

     Sum = A1 + A2 + A3;

     if(Sum == 180 && A1 > 0 && A2 > 0 && A3 > 0)     {
        printf("Valid Triangle \n");
     }
     else
     {
        printf("Invalid Triangle \n");
     }
}

int main()
{

   int iNum1 = 0;
   int iNum2 = 0;
   int iNum3 = 0;

   printf("Enter Triangle Value : ");
   scanf("%d",&iNum1);

   printf("Enter Triangle Value : ");
   scanf("%d",&iNum2);

   printf("Enter Triangle Value : ");
   scanf("%d",&iNum3);


   CheckTriangle(iNum1,iNum2,iNum3);


   return 0;
}
