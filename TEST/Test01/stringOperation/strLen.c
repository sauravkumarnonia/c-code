#include "strheader.h"
 void strLen (char str[])
{
int i;
for(i = 0; str[i]!='\0'; i++);

printf("Lenght of Your String is: %d\n", i);
}
