#include<stdio.h>
int main(){
	int day;
	printf("Enter the number of day->\n");
	scanf("%d",&day);
	
	switch(day){
	case 1:
		printf("The Day is Sunday");
		break;
	case 2:
		printf("The Day is Monday");
		break;
	case 3:
		printf("The Day is Tuesday");
		break;
	case 4:
		printf("The Day is Wednesday");
		 break;
	case 5:
		printf("The Day is Thursday");
		break;
	case 6:
		printf("The Day is  Friday");
		break;
	case 7:
		printf("The Day is Saturday");
		break;
	Default:
		printf("Incorrect Date Submitted");
		
	
}
	
	return 0;
}