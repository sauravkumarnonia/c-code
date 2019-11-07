#include "bitwisehdr.h"


int toggleOddBit (unsigned int num)
{
	int i;
	
for (i = 0; i <sizeof(int)*8; i = i+2){
	num = toggleBit(num, i);

}
return num;
}
