#include<stdio.h>
int power(int,int);
void main()
{
int num1,num2,pt;
printf("Enter base and it's power:\n");
scanf("%d\n%d",&num1,&num2);
pt=power(num1,num2);
printf("your result is:%d\n",pt);
}
int power(int num1,int num2)
{
int pt = 1,i;
for(i=1;i<=num2;i++)
	pt = pt*num1;
return pt;
}


