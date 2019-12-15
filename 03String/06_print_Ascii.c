#include<stdio.h>
void printAscii()
{
int i;                                                                      
for(i='0'; i<='9'; i++)                                                     
 printf("Ascii Value of %c = %d\n",i,i);
}
int main()
{
	printAscii();
}
