/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : 5printPrime.c
 * Created on    : Tuesday 12 November 2019 10:46:16 PM IST
 * Last modified : Tuesday 12 November 2019 10:48:23 PM IST
 * Description   : 
 * ***********************************************************************/

#include <stdio.h>

void printPrime ()
{
	int i,j,fact;

	for(i = 2;i<=10;i++){
	
	fact = 0;
	for(j = i;j<=10;j++){
	if(i%j==0)
		fact++;
	}
	if (fact==2)
		printf("1st 10 Prime Number is: %d\n", i);
	}

	// code to print first 10 prime numbers
}

int main()
{
	printPrime();
	return 0;
}
