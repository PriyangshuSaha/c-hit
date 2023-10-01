#include<stdio.h>
int main()
{
    int monn;// month number
    printf(" Enter the month number(1-12)\n");
    scanf("%d",&monn);
    
    switch (monn)
    {
    case 1:
        printf(" Jan has 31 days");
        break;

    case 2:
        printf("Feb has 28/29 days");
        break;

    case 3:
        printf(" Mar has 31 days");
        break;

    case 4:
        printf(" Apr has 30 days");
        break;

    case 5:
        printf(" May has 31 days");
        break;

    case 6:
        printf(" june has 30 days");
        break;

    case 7:
        printf("July has 31 days");
        break;

    case 8:
        printf(" Aug has 31 days");
        break;

    case 9:
        printf(" Sep has 30 days");
        break;
    
    case 10:
        printf(" Oct has 31 days");
        break;

    case 11:
        printf(" Nov has 30 days");
        break;

    case 12:
        printf(" Dec has 31 days");
        break;

    default:
        printf("Wrong input");
        break;
    }


    return 0;
}