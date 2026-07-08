#include<stdio.h>

    void CheckCharacter(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            printf("%c is an Uppercase Alphabet\n", ch);    }
        else if(ch >= 'a' && ch <= 'z')
        {
        printf("%c is a Lowercase Alphabet\n", ch);  
        }
        else
        {
            printf("Not an  Alphabet \n");
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

