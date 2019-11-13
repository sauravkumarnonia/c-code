/* ************************************************************************
 * Created by    : Rahul Kumar Nonia
 * File name     : 4reverseNum.c
 * Created on    : Tuesday 12 November 2019 10:48:36 PM IST
 * Last modified : Tuesday 12 November 2019 10:53:02 PM IST
 * Description   : 
 * ***********************************************************************/

#include <stdio.h>
int reverseNum(int);
int num, result, rem = 0;
int main()
{
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	result = reverseNum(num);
    printf("Number after reversing: %d\n", result);
	return 0;
}

int reverseNum(int num)
{
	while(num!=0){
 rem = num%10;
 result = result*10 + rem;
  num = num/10;
	}
	// write your code
	return  result; // return reversed number
}
