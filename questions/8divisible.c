#include<stdio.h>
int div(int);
int main()
{
int a;
printf("Enter a number:\n");
scanf("%d",&a);
div(a);
if (div(a)==1) {printf("COW-BULL\n"); }
else if (div(a)==2) {printf("COW"); }
else if (div(a)==3) {printf("BULL"); }
else printf("OUT OF RANGE");
}
int div(int a)
{
if(a%3==0&&a%7==0){
return 1;

}
else
if(a%3==0){
return 2;

}
else
if(a%7==0){
return 3;

}
else
return 0;

}




