#include "bitwisehdr.h"


int main()
{
	// write your code here
	// use switch keyword to prompt the user 
	//

	unsigned int num; 
	int choice, result, pos, num1, num2;

	printf("1. check number is even or odd. \n");
	printf("2. check number is power of 2. \n");
	printf("3. count the number of set bit of a number. \n");
	printf("4. toggle odd bits of a number \n");
	printf("5. set a bit at given position. \n");
	printf("6. Convert into toggleBit. \n");
	printf("7. Find Maximum Number. \n");
	printf("8. Count seti bit further Zero. \n");
	printf("9. Count Zero Bit Further One. \n");
	printf("Enter your choice: \n");

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
			result = isPowerOfTwo(num);
			if(result == 1){
				printf("%d is isPowerOfTwo\n", num);
			}
			else{
				printf("%d is not ispoweroftwo", num);

			}

			break;

       case 3:
			result = countSetBit(num);
			
							
			
				break;
       case 4:
				result = toggleOddBit(num);
			    
			    printf("After ToglleOddBits: %d \n", num);
				break;		

      case 5:
				printf("Enter posotion: ");
				scanf("%d",&pos);
				result = setBit(num, pos);
				printf("num after seting bit is: %d \n",num);


				break;
			
	  case 6:
				printf("Enter a pos:");
			    scanf("%d",&pos);
				result = toggleBit(num, pos);
		        printf("Your Toggle Value is: %d \n", num);

                break;
				
	 case 7:
				result = MaximumNum(num1, num2);
				printf("Maximum Number is: %d 'n", result);

                
				break;

	 case 8:
				result = LeadingSetBit(num);
				printf("Total Leading SetBit: %d \n", result);

				break;


	 case 9:

				result = ClearedBit(num);
				printf("Total cleared bit is: %d \n", result);


				break;

				// complete other cases 

				default:
				printf("Wrong choice \n");
				break;
     

			}

			return 0;
	
	}

