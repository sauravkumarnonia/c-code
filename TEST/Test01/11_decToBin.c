#include<stdio.h>
void dectobin(){
int i=0,j,n, arr[100];
while(n>0)
{
arr[i]=n/2;
i++;
}
for(j=i-1; j>=0; j--)
{
printf("%d", arr[j]);
}


 int main()
  {
      int n,j;
  printf("Enter DEcimal number: : ");
  scanf("%d", &n);
  dectobin();
 }

