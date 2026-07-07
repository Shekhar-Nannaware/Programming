#include<stdio.h>
#define VOTING_AGE 18

void CheckVotingAge(int Age)
{
  if(Age >= VOTING_AGE)
  {
    printf("Your Age is %d Eligible for Voting \n",Age);
  }
  else
  {
    printf("Your Age is %d Not Eligible for Voting \n",Age);
  }
}

int main()
{
  int Age = 0;

  printf("Enter Your Age : ");
  scanf("%d",&Age);

  CheckVotingAge(Age);

  return 0;
}