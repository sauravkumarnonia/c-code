#include "bitwisehdr.h"


int main()
{
	// write your code here
	// use switch keyword to prompt the user 
	//
	
	int num, choice, result;

	printf("1. check number is even or odd. \n");
	printf("2. check number is power of 2. \n");
	printf("3. count the number of set bit of a number. \n");
	printf("4. toggle odd bits of a number \n");
	printf("5. set a bit at given position. \n");

	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	printf("Enter the number: ");
	scanf("%d", &num);

	switch(choice){
		case 1:
			result = evenOdd(num);
			if(result == 1){
				printf("%d is even\n", num);
			}
			else{
				printf("%d is odd\n", num);
			}
		break;

		case 2:

		break;
		
		// complete other cases 

		default:
			printf("Wrong choice \n");
		break;
	}

	return 0;
}
