#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,CI;
	printf("Enter the amount you want to deposit=\n");
	scanf("%f",&p);
	printf(" for how much time you want to keep the money(in year) ->");
	scanf("%f",&t);
	printf("The rate of interest is =");
	scanf("%f",&r);
	CI=p* (pow((1+r/100), t));
	printf("The compound interest will be;:%f",CI);
	return 0;
	
}