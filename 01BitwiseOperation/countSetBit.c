#include "bitwisehdr.h"
int countSetBit(int num)
{
	int result;
   	   while (num != 0){

	 if(num & 1 == 1){
		 result ++;
	num =num >> 1;
 }
    }
printf("result %d", result);
//write codes here
   //return 1 if number is countsetbit
   //return 0 if number is not countsetbin
}
