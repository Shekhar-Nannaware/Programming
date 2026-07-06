#include<stdio.h>

#define VOTING_AGE 18
#define MAX_AGE 120

void CheckVotingEligibility(int age)
{
    if(age >= VOTING_AGE && age <= MAX_AGE)
    {
        printf("Age : %d\n", age);
        printf("Status : Eligible for Voting\n");
    }
    else if(age >= 0 && age < VOTING_AGE)
    {
        printf("Age : %d\n", age);
        printf("Status : Not Eligible for Voting\n");
    }
    else
    {
        printf("Invalid Age\n");
    }
}

int main()
{
    int age = 0;

    printf("Enter Your Age : ");
    scanf("%d",&age);

    CheckVotingEligibility(age);

    return 0;
}

