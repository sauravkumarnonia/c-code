#include"strheader.h"
void strCopy (char str[])
{
char str1[30];
printf("Enter to copy: ");
scanf("%s", str1);
int i;
for(i=0; str1[i]!='\0'; i++)
{
str[i]=str[i];
}
str[i]='\0';

}
