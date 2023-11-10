#include<stdio.h>
int main()
{
	int a,b,result;
	char opt;
	
	
	printf("Choose the operator =\n");
	scanf("%c",&opt);
	printf("Enter 1st number =\n");
	scanf("%d",&a);
	printf("Enter the 2nd number=\n");
	scanf("%d",&b);
	
	
	
	if(opt=='+'){
	result=a+b;
	printf("The result is %d",result);
	}
	else if(opt=='-'){
	result= a-b;
	printf("The result is %d",result);
	}
	else if (opt=='/'){
	result=a/b;
	printf("The result is %d",result);
	}
	else if(opt=='*'){
	result = a*b;
	printf("The result is %d",result);
	}
	else
	printf("Something went wrong");
	
	return 0;
}