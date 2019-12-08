#include<stdio.h>
int leap(int);
int main()
{
int a;
printf("Enter a year\n");
scanf("%d",&a);
leap(a);
}
int leap(int a)
{
if(a%100==0){
if(a%400==0)
	printf("leap year");

	else
		printf("not a leap year");
}
else{

if(a%4==0)
	printf("leap year");
	else
	printf("not a leap year");
}
return 0;
}

