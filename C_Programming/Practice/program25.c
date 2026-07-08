#include<stdio.h>

void CalculateGrade(int Marks)
{
     if(Marks >= 90 && Marks <= 100)
     {
        printf("%d A Grade \n",Marks);
     } 
     else if(Marks >= 75 && Marks <= 89)
     {
        printf("%d B Grade \n",Marks);
     } 
     else if(Marks >= 60 && Marks <= 74)
     {
        printf("%d C Grade \n",Marks);
     } 
     else if(Marks >= 35 && Marks <= 59)
     {
        printf("%d D Grade \n",Marks);
     } 
     else
     {
        printf("%d Fail \n",Marks);
     }
}

int main()
{
    int Marks = 0;

    printf("Enter Your Marks : ");
    scanf("%d",&Marks);

    CalculateGrade(Marks);

    return 0;
}