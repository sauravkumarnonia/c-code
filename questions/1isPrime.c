/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : 1isPrime.c
 * Created on    : Tuesday 12 November 2019 09:28:56 PM IST
 * Last modified : Tuesday 12 November 2019 09:29:15 PM IST
 * Description   : 
 * ***********************************************************************/


// write your codes
#include<stdio.h>
int i,num;
void isPrime(int){


printf("Enter a number:");
scanf("%d",&num);
for(i=2; i<=num-1; i++)
	if(num%i == 0)
		break;
if(i == num)

	printf("%d is a Prime number",num);
else
	printf("%d is not a Prime number",num);

}
int main(){

isPrime(num);
return 0;
}




