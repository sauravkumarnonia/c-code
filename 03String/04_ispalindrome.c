#include<stdio.h>
#include<string.h>
int ispalindrome(char str[], char ch)
{
  int i, len;
len = strlen(str);
for(i=0; i<len/2; i++){
	if(str[i]!=str[len-1-i]){
		printf("Note a palindrom:\n");
		break;
}
}
if (i==len/2)
	printf("Palindrome\n");
	}
int main()
{
	
char ch, str[20];
printf("Enter an string: ");
scanf("%s",str);
ispalindrome(str, ch);

}
