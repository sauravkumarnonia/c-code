#include "strheader.h"

int main()
{

char str[100], str2[100];
int choice, result, l, i;
printf("01. To Reverse An String: \n");
printf("02. To SqueezeAn string: \n");
printf("03. To copy an string: \n");
printf("04. To Find lenght of a String: \n");
printf("05. To Upper case into Lower Case: \n");
printf("06. To convert into lower to upper case: \n");
printf("07. To strint cat: \n");
printf("Enter Your Choice: \n");
scanf("%d", &choice);
printf("Enter A String: \n");
	scanf("%s",str);

	switch(choice)
	{
		case 1:
		revStr(str);
			printf("Lenght is: %s\n",str);
			

			break;

	
        case 2:

			break;

		case 3:
			
			break;

		case 4:
			

			   

		case 5:
			toLower(str);
			printf("In Lower Case: %s \n",str);

			break;

		case 6:
				toUpper(str);
			printf(" Upper case: %s",str);


			break;


		case 7:
			
			printf("Enter 2nd string: ");
			scanf("%s",str2);
			strCat(str);

			printf("After concatinate: %s", str2);

			break;



		default:
			printf("Wrong Choice: \n");
			break;

	}
return 0;	
}

