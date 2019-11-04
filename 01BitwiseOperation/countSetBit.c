#include "bitwisehdr.h"
int countSetBit(int num)
{
	int result =0;
   	   while (num != 0){

	 if(num & 1 == 1)
		 result ++;
	num =num >> 1;
 
    }
printf("Total SetBit is:  %d\n", result);
//write codes here
   //return 1 if number is countsetbit
   
   return result;
	   //return 0 if number is not countsetbin
}
