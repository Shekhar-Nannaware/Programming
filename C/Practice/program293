// 5678
//  8   7   6   5   

#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Display(iNo);
        printf("%d\n",iDigit);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}