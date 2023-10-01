#include<stdio.h>
int main()
{
	int grade;
	printf("Enter the your marks=\n");
	scanf("%d",&grade);
	if(grade>=0 && grade<=100) {
		switch(grade/10 ){
		case 9:
		printf("You got A grade\n");
		break;
		case 10:
		printf("You got A grade\n");
		break ;
		case 8:
		printf("You got B grade\n");
		break;
		case 7:
		printf("You got C grade\n");
		break;
		case 6:
		printf("you got D\n");
		break;
		case 5:
		printf("you got D\n");
		break;
		case 4:
		printf("you got D\n");
		break;
		case 3:
		printf("You got F\n");
		break ;
		case 2:
		printf("You got F\n");
		break;
		case 1:
		printf("You got F\n");
		break;
	}
}		else
		printf("you entered invalid score");
		
return 0;	
	
}
	
	
	
	
	
	