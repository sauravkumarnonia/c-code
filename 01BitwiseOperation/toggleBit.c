#include "bitwisehdr.h"
int toggleBit(unsigned int num, int pos)
{
num = num^(1<<(pos-1));


return num;
}
