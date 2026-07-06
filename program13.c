#include<stdio.h>

void Display(int Marks)
{
    int PassingMarks = 35;

    if(Marks >= PassingMarks && Marks <= 100)
    {
        printf("Pass\n");
    }
    else if(Marks >= 0 && Marks < PassingMarks)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}

int main()
{
    int Marks = 0;

    printf("Enter your Marks: ");
    scanf("%d", &Marks);

    Display(Marks);

    return 0;
}
