#include "strheader.h"

void revStr(char str[])
{
char temp;
int i, j, l = 0;
for(l = 0; str[l]!='\0'; l++)
	i++;
i = 0;
j = l-1;
while(i<j)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
i++;
j--;
}

}
