#include<stdio.h>
void divisible(int);
void main()
{
int a;
printf("Enter a number:\n");
scanf("%d",&a);
divisible(a);
}
void divisible(int a)
{
if(a%3==0&&a%7==0){
printf("COW-BULL\n");
}
else
if(a%3==0){
printf("COW\n");
}
else
if(a%7==0){
printf("BULL\n");
}
else{
printf("OUT OF RANGE");
}
}




