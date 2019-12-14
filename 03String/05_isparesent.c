#include<stdio.h>
#include<string.h>
int ispresent(char str[], char ch)
{
	
	int i, f=0;
for(i=0; str[i]!='\0'; i++)
     {
if(str[i]==ch){
 
printf("\ncharacter is present");
}
else{
printf("\n character is not present:");
}
return 0;
}
}

int main()
{
	char ch, str[30];
printf("\nEnter an string: ");
scanf("%s",str);
    printf("Enter a char for search:");
     scanf("%c",&ch);    
ispresent(str, ch);

}
