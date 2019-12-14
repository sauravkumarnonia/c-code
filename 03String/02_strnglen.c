#include<stdio.h>
int stringlen(char str[], int l)
{
if(str[l] == '\0')
	return l;
l++;
return (stringlen(str, l));
}


int main()

{
	printf("Enter an String: ");
	char str[100];
	int l = 0;
	scanf("%s", str);
	printf("Lenght is: %d\n",stringlen(str, l));
return 0;
}
