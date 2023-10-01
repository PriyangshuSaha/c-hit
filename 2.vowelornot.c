#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an aplhabet: \n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("It is an aplhabet 'A'. ");
        break;

    case 'E':
        printf("It is an aplhabet 'E'. ");
        break;

    case 'I':
        printf("It is an aplhabet 'I'. ");
        break;

    case 'O':
        printf("It is an aplhabet 'O'. ");
        break;

    case 'U':
        printf("It is an aplhabet 'U'. ");
        break;

    case 'a':
        printf("It is an aplhabet 'a'. ");
        break;

    case 'e':
        printf("It is an aplhabet 'e'. ");
        break;

    case 'i':
        printf("It is an aplhabet 'i'. ");
        break;

    case 'o':
        printf("It is an aplhabet 'o'. ");
        break;

    case 'u':
        printf("It is an aplhabet 'u'. ");
        break;
    
    default:~
        printf("Wrong Input!");
        break;
    }
    

    return 0;
}