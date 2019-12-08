#include<stdio.h>
#include<math.h>
int num, c, re,n=0,ans=0;

int main(){

printf("Enter a Number:");
scanf("%d",&num);
arm(num);
printf("%d Is an Armstrong Number\n",num);
return 0;

}
int arm(int num)
{

	c=num;
	n++;}
	c=num;
	while(c!=0){
	
        

		re = c%10;
        ans = ans+pow(re,n);

		c = c/10;
		if(ans == num){
		
		printf("%d\nI")
		}
	}








