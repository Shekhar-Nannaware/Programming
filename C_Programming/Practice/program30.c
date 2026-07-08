#include<stdio.h>

void Maximum(int No1,int No2,int No3)
{
    if(No1 >= No2 && No1 >= No3)
    {
        printf("Maximum Number : %d\n",No1);
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        printf("Maximum Number : %d\n",No2);
    }
    else
    {
        printf("Maximum Valid Number : %d\n",No3);
    }
}

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;
    int iNum3 = 0;

    printf("Enter Number : ");
    scanf("%d",&iNum1);

    printf("Enter Number : ");
    scanf("%d",&iNum2);

    printf("Enter Number : ");
    scanf("%d",&iNum3);
    
    Maximum(iNum1,iNum2,iNum3);

    return 0;    
}
