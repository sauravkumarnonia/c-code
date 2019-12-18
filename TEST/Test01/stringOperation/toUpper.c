#include "strheader.h"
void toUpper (char str[])
{
int i;
for(i=0;str[i]; i++){
if(str[i]>='a' && str[i]<='z')
	str[i] = str[i]-32;
}

}
