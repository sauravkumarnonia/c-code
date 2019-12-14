#include<stdio.h>
 int reverse(char str[])
{
char temp;
int i, j, l=0;
for(i=0;str[i]!='\0'; i++)
	i++;
i=0;
j=l-1;
while(i<j)
{
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  i++;
  j--;
}
printf("\nReverse is: %s",str);
}
int main(){
	char str[20];
	printf("Enter an string: ");
	scanf("%s", str);
reverse(str);
}
