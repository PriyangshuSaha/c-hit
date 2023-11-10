#include<stdio.h>
int main(){
char anonum;
int num;
do{
printf("Enter a number\n");
scanf("%d",&num);
printf("square of %d is %d\n",num,num*num);
printf("Want to enter another number y/n : ");
scanf("%c",&anonum);
}while(anonum=='y');

return 0;
}