#include "bitwisehdr.h"

int isPowerOfTwo (int num)
{
  if ((num & (num - 1)) != 0)
	  return 0;
  else
	  // write your code here
	// return 1 for power of 2
	// return 0 for not power of 2
	return 1;
}
