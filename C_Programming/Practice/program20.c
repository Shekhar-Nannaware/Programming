#include<stdio.h>
#define LEAP 4

void CheckLeapYear(int Year)
{
  if(Year % LEAP == 0)
  {
    printf("%d is Leap Year \n",Year);
  }
  else
  {
    printf("%d is Not Leap Year \n",Year);

  }
}
int main()
{
  int Year = 0;
  printf("Enter Leap Year : ");
  scanf("%d",&Year);

  LeapYear(Year);

  return 0;
}