#include <stdio.h>

int main() {

  float a,b,result;
  char op;
  printf ("Enter the first number=\n");
  scanf("%f",&a);
  printf("Enter the operator=\n");
  scanf("%s",& op);
  printf("Enter the second number=\n");
  scanf("%f",&b);
  
  switch(op) {
  	
  		case '+':
		  printf("%f + %f = %f",a,b,a+b);
		  break;
  		
  		default :printf("Invalid Operator");
		  
  		
  		return 0;
	}
}
  