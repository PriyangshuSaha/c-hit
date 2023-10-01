#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float p,q,D;
	printf("Enter the value of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	D=sqrt(b*b-4*a*c);
	p=(-b+D)/(2*a);
	q=(-b-D)/(2*a);
	printf("%f\n",p);
	printf("%f\n",q);
	return 0;
	
}