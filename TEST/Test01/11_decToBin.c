#include<stdio.h>
int no;
void dectobin(){
	int i=1, bin = 0, re;

while(no!=0)
{
re = no%2;
no = no/2;
bin = bin+(re*i);
i = i*10;
}
printf("The binary is %d",bin);
}



 int main()
  {
      
  printf("Enter DEcimal number: ");
  scanf("%d", &no);
  dectobin();
  return 0;
 }

