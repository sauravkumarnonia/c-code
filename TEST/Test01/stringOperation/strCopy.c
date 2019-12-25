#include"strheader.h"
void strCopy (char str[])
{
char str2[30];
int i;
for(i=0; str[i]!='\0'; i++)

str2[i]=str[i];

str2[i]='\0';
printf("After copying a string: %s\n", str2);  
}
