#include<stdio.h>

int CheckTriangle(int Angle1, int Angle2, int Angle3)
{
    int Sum = Angle1 + Angle2 + Angle3;

    if(Sum == 180)
    {
        printf("Valid Triangle Value : %d\n",Sum);
    }
    else
    {
        printf("Invalid Triangle Value : %d\n",Sum);
    }

    return Sum;
}

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iNum3 = 0;
    int Ans = 0;

    printf("Enter Triangle Validity : ");
    scanf("%d",&iNum1);

    printf("Enter Triangle Validity : ");
    scanf("%d",&iNum2);

    printf("Enter Triangle Validity : ");
    scanf("%d",&iNum3);

   Ans = CheckTriangle(iNum1,iNum2,iNum3);

    return 0;
}
