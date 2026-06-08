///////////////////////////////////////////////////////
//
// Program divide two numbers
//
///////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         int, int
//  Ouput :         int
//  Description :   Performs Divide of 2 int
//  Date :          07/06/2026
//  Author :        Shekhar Jalindar Nannaware
//
///////////////////////////////////////////////////////

int Divide(  int iNo1,                  //  Store First Input
             int iNo2                   //  Store Second Input
          )
{
    int iAns = 0;                       //  Variable to store result

    if (iNo2 == 0)                      //  Logic
    {
        return -1;
    }
    iAns = iNo1 / iNo2;                 //  Perform Division

    return iAns;                        //  Store Result
}

int main()
{
    int iValue1 = 5, iValue2 = 15;      //  iValue1 First input , iValue2 Second input
    int iRet = 0;

    iRet = Divide(iValue2, iValue1);
    printf("Division is %d \n", iRet);  //  Print Result

    return 0;
}


/////////////////////////////////////////////////////// 
//
//  Input :     5    15
//  Output :    3
//
///////////////////////////////////////////////////////
