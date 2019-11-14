/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : 1isPrime.c
 * Created on    : Tuesday 12 November 2019 09:28:56 PM IST
 * Last modified : Thursday 14 November 2019 08:49:11 PM IST
 * Description   : 
 * ***********************************************************************/


// write your codes
#include<stdio.h>

int isPrime(int num){
	int i;
	for(i = 2; i <= num / 2; i++){
		if (num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	if (isPrime(num))
		printf("%d is prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return 0;
}




