#include<stdio.h>

void CalculateGrade(int Marks)
{
        if(Marks < 0||Marks > 100)
        { 
            printf("Invalid \n");
        }
        else if (Marks >= 90 && Marks <= 100)
        {
            printf("A \n");
        }
        else if (Marks >= 75 &&Marks <= 89)
        {
           printf("B \n");
        } 
        else if (Marks >= 60 && Marks <= 74)
        {
           printf("C \n");
        }
        else if (Marks >= 35 && Marks <= 59)
        {
           printf("D \n");
        } 
        else
        {
           printf("Below 35 Fail \n");
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
