#include<stdio.h>

void CheckCharacter(char ch)
{
   if(ch >= 'A' && ch <= 'Z') 
    {
        printf("%c Uppercase Alphabet \n",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c Lowercase Alphabet \n",ch);
    }
    else
    {
        printf("Enter Valid Alphabet \n");
    }
}

int main()
{
    char ch = '\0';

    printf("Enter Character : ");
    scanf("%c",&ch);

    CheckCharacter(ch);

    return 0;
}
