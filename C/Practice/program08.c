/////////////////////////////////////////////////////////////////
//
//   Include Required header Files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//   Function Name : AddTwoNumbers
//   Input         : float, float
//   Output        : float
//   Description   : Performs Addition of 2 floats
//   Date          : 04/08/2026
//   Author        : Shekhar jalindar Nannaware
//
/////////////////////////////////////////////////////////////////

float AddTwoNumbers(  
                        float fNo1,       // first input
                        float fNo2        // Second input
                   )
{
    float fAns = 0.0f;                    // Variable to store result 
    fAns = fNo1 + fNo2;                   // Perform Addition

    return fAns;
};

/////////////////////////////////////////////////////////////////
//
//   Application to perform Addition of 2 float Values
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;                  //  To Store First input
    float fValue2 = 0.0f;                  //  To Store Second input
    float fResult = 0.0f;                  //  To Store the Result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1, fValue2);            //  Perform the Addition
    printf("Addition is : %f\n",fResult);
    return 0;
}

/////////////////////////////////////////////////////////////////
//
//   Input  :    10.0    11.0
//   Output :    21.0
//
/////////////////////////////////////////////////////////////////
