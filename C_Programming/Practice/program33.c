#include<stdio.h>

void CheckTriangle(int A1, int A2, int A3)
{
    int Sum = A1 + A2 + A3;

    if(Sum == 180)
    {
        printf("Valid Triangle\n");
        
        if(A1 >= A2 && A1 >= A3)
        {
            printf("Largest Angle : %d\n",A1);
        }
        else if(A2 >= A1 && A2 >= A3)
        {
            printf("Largest Angle : %d\n",A2);
        }
        else
        {
            printf("Largest Angle : %d\n",A3);
        }
    }
    else
    {
        printf("Invalid Triangle\n");
        printf("Angle Sum : %d\n",Sum);
    }
}

int main()
{
    int Angle1 = 0;
    int Angle2 = 0;
    int Angle3 = 0;

    printf("Enter First Angle : ");
    scanf("%d",&Angle1);

    printf("Enter Second Angle : ");
    scanf("%d",&Angle2);

    printf("Enter Third Angle : ");
    scanf("%d",&Angle3);

    CheckTriangle(Angle1,Angle2,Angle3);

    return 0;
}
